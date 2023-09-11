#include<iostream>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
    ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* l3 = new ListNode;
        ListNode* a = new ListNode;
        ListNode* b = new ListNode;
        ListNode* temp = new ListNode;
        if (list1->val == list2->val) {
            l3->val = list1->val;
            l3->next = list2;
        }
        else {
            if (list1->val > list2->val) {
                a = list1;
                b = list2;
            }else {
                a = list2;
                b = list1;
            }
            l3->val = a->val;
            l3->next = b;
        }

        while (true) {
            l3 = l3->next;
            if (list1->next == NULL) {
                while (list2->next != NULL) {
                    list2 = list2->next;
                    l3 = l3->next;
                    l3->next = list2;

                }
            }
            list1 = list1->next;
            list2 = list2->next;
            temp=biggerone(list1, list2);
            l3->next = temp;
            l3 = l3->next;
            l3->next = temp->next;

        }
    }
};

ListNode* biggerone(ListNode* list1, ListNode* list2) {
    
    ListNode* res = new ListNode;
    if (list1->val == list2->val) {
        res->val = list1->val;
        res->next = list2;
    }
    else {
        if (list1->val > list2->val) {
            res->val = list1->val;
            res->next = list2;
        }
        else {
            res->val = list2->val;
            res->next = list1;

        }

    }
    return res;

}