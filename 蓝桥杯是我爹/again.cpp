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
    l2->next = sc;
    sc->val = 6;
    sc->next = ti;
    ti->val = 4;
    ti->next = NULL;

    ListNode* p1 = l1;
    ListNode* p2 = l2;
    int nums[200] = { -1 };
        for (int i = 0; i < 200; i++) {
            nums[i] = -1;
        
             }

    int i = 0;
    while (p1) {
        nums[i] = p1->val;
        p1 = p1->next;
        i++;
    }
    i = 0;
    while (p2) {
        nums[i] = nums[i] + p2->val;
        p2 = p2->next;
        i++;
    }
    for (int i = 0; i < 200; i++) {
        if (nums[i] != -1) {
            cout  << "is :" << nums[i] << endl;
        }
    }
    i = 0;
    for (i; nums[i] != -1; i++) {
        if (nums[i] >= 10) {
            nums[i + 1] = nums[i + 1] + 1;
            nums[i] = nums[i] % 10;

        }
    }
        
    
    cout << endl;
    for (int i = 0; i < 200; i++) {
        if (nums[i] != -1) {
            cout << "second time text :" << nums[i] << endl;
        }
    }
    cout <<i;
    int n = i;
    
    ListNode* res = new ListNode(nums[0]);
    ListNode* cres = new ListNode;
    cout << "res's text one ;" << res->val << endl;
    cres = res;
    cout << "res's cres one ;" << cres->val << endl;
    for (i = 1; i < n; i++) {
        ListNode* net = new ListNode;
        net->val = nums[i];
        cout << endl << "net's value: " << net->val << endl;
        cres->next = net;
        cres = net;
    }

    cout << endl;

    while (res) {
        cout << res->val << " ";
        res = res->next;
    }

}