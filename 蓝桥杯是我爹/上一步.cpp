#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};
int main() {
    ListNode* l1 = new ListNode;
    ListNode* sec = new ListNode;
    ListNode* thi = new ListNode;
    l1->val = 2;
    l1->next = sec;
    sec->val = 4;
    sec->next = thi;
    thi->val = 3;
    thi->next = NULL;

    ListNode* l2 = new ListNode;
    ListNode* sc = new ListNode;
    ListNode* ti = new ListNode;
    l2->val = 5;
    sc->val = 6;
    ti->val = 4;
    l2->next = sc;
    
    sc->next = ti;
    
    ti->next = NULL;

    ListNode* p;
    p = l1;
    int long1 = 0;
    while (p->next != NULL) {
        long1++;
        p = p->next;
    }
    p = l2;
    int long2 = 0;
    while (p->next != NULL) {
        long2++;
        p = p->next;
    }


        int sum1=0;
        int sum2=0;
        int count=0;
    p = l1;
    for (int z = 0; z <= long1; z++) {
        sum1 = sum1 + (p->val) * int(pow(10, z));
        p = p->next;
    }
    p = l2;
    for (int q = 0; q <= long2; q++) {
        sum1 = sum1 + (p->val) * int(pow(10, q));
        p = p->next;
    }
    count = sum1 + sum2;

    cout << "values 'sof count" << count;

}