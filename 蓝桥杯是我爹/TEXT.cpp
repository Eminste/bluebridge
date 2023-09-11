#include<iostream>
#include<math.h>
using namespace std;

 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
int main() {
    ListNode* l1=new ListNode;
    ListNode* sec = new ListNode;
    ListNode* thi = new ListNode;
    l1->val = 2;
    l1->next = sec;
    sec->val = 4;
    sec->next = thi;
    thi->val = 3; 
    thi->next = NULL;
    ListNode* p = l1;
    int i = 0;
    int sum1=0;
    int count;

    int text = 0;
    while (p->next != NULL) {
        text++;
        p = p->next;
    }
    cout <<"value's of text" <<text<<endl;//遍历得到链条的长度得到l1 和l2的长度 

    p = l1;
    for (i; i <=text; i++) {//i<链条l1 l2的长度,得到值sum1和sum2 相加得到count,取得count的位数再获得他的每一位保存在数组nums里面
                                                                //一个个写进listnode里面 
        cout << "p.val's value" << p->val << endl;
        sum1 = sum1 + (p->val) * pow(10, i);
        p = p->next;
        /*i = i + 1;*/
        cout << sum1 << endl;
        /* cout <<"sum1 'svalue :"<< sum1<<endl;
         sum1 = sum1 * 10 ^ i;
         cout << "second times's value" << pow(10,i) << endl;*/
    }//
       
    
    
    cout << endl << endl << "value of sum1 :" << sum1 << endl;
    count = sum1 + 465;  //807

    int weishu = log10(count)+1;//3weishu
    int n = weishu;//n=3
    cout << "n'svalue:" << n;
    int* nums=new int[n]();
    //nums[0] = 0; nums[1] = 1; nums[2] = 2;
    //for (int j = 0; j < 3; j++) {
    //    cout << nums[j];
    //}
    int w = n - 1;
    
    for (w; w > -1; w--) {
        cout <<"text one :"<< nums[w] << endl;
        nums[w] = count / (pow(10, w));
        cout << "text two :" << nums[w] << endl<<endl;

        count = count % int(pow(10, w));
    }
    for (int j = 0; j < 3; j++) {
    cout << nums[j]<<",  ";
        }

    cout << endl << endl << "here is the result:";

    ListNode* res = new ListNode(nums[0]);
    ListNode* cres = new ListNode;
    cout <<"res's text one ;"<< res->val<<endl;
    cres = res;
    cout << "res's cres one ;" << cres->val << endl;
    for (i = 1; i < n; i++){
        ListNode* net = new ListNode;
        net->val = nums[i];
        cout << endl << "net's value: " << net->val<<endl;
        cres->next = net;
        cres = net;
    }

    cout << endl;

    while (res) {
        cout << res->val << " ";
        res = res->next;
    }

    
    /*do  {
        cout << res->val << ", ";
        res = res->next;
    } while (res->next = nullptr);
    {
        cout << "that's the end";
    }*/


}