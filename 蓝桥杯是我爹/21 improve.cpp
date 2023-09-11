#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode;
        ListNode* head = new ListNode;
        head = l3;
        l3->val = 0;
        int ltc = 1;
        while (ltc != 0) {
            while ((l1->val) <= (l2->val)) {
                l3->next = l1;
                if (l1 ==NULL) {
                    ltc = 0;
                    while (l2->next != NULL) {
                        l3->next = l2;
                        l2 = l2->next;
                        l3 = l3->next;

                    }
                    break;
                }
                l1 = l1->next;
                l3 = l3->next;
            }
            while ((l2->val) < (l1->val)) {
                l3->next = l2;
                if (l2 ==NULL) {
                    ltc = 0;
                    while (l1->next != NULL) {
                        l3->next = l1;
                        l1 = l1->next;
                        l3 = l3->next;
                    }
                    break;
                }
                l2 = l2->next;
                l3 = l3->next;
            }
        }
        head = head->next;
        return head;
    }
};



int main() {
    ListNode* l1 = new ListNode;
    ListNode* sec = new ListNode;
    ListNode* thi = new ListNode;
    //2  4  3
    l1->val = 1;
    sec->val = 2;
    thi->val = 4;
    l1->next = sec;
    sec->next = thi;
    thi->next = NULL;

    ListNode* l2 = new ListNode;
    ListNode* sc = new ListNode;
    ListNode* ti = new ListNode;
    //1  7  6
    l2->val = 1;
    sc->val = 3;
    ti->val = 4;
    l2->next = sc;
    sc->next = ti;
    ti->next = NULL;

//    while (l1) {//遍历Listnonode的方法
//    cout <<"l1::" << l1->val << "," << endl;
//    l1 = l1->next;
//}
//    while (l2) {//遍历Listnonode的方法
//        cout <<"l2::" << l2->val << "," << endl;
//        l2 = l2->next;
//    }  //链表是没问题的


    Solution result;
    ListNode* res = new ListNode;
    res=result.mergeTwoLists(l1, l2);
    while (res) {
        
        cout <<endl<<"here is the result:" << res->val << ",";
        res = res->next;
    }

}


/*缺少一个数据的版本
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* l3 = new ListNode;
        ListNode* head = new ListNode;
        head = l3;
        l3->val = 0;
        int ltc = 1;
        while (ltc != 0) {
            while (int(list1->val) <= int(list2->val)) {
                l3->next = list1;
                if (list1->next == NULL) {
                    ltc = 0;
                    while (list2->next != NULL) {
                        l3->next = list2;
                        list2 = list2->next;
                        l3 = l3->next;

                    }
                    break;
                }
                list1 = list1->next;
                l3 = l3->next;
            }
            while (int(list2->val) <= int(list1->val)) {
                l3->next = list2;
                if (list2->next == NULL) {
                    ltc = 0;
                    while (list1->next != NULL) {
                        l3->next = list1;
                        list1 = list1->next;
                        l3 = l3->next;
                    }
                    break;
                }
                list2 = list2->next;
                l3 = l3->next;
            }
        }
        //l3=l3->next;
        //l3->next=(list1 == nullptr ? list2 : list1);
        head=head->next;
        return head;
    }
};
*/