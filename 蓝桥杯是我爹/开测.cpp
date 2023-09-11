#include<iostream>
#include<string>
using namespace std;
int main() {
    string s = "pwwkew";
    int len = 1;
    int len1 = 1;
    int len2 = 0;
    char cmp = '0';
    char cmp2 = '0';
    int Blen = 0;
    int n = 0;
    for (int i = 0; i != s.length(); i++) {
        cmp = s[i];
        cout <<"value of cmp:   " << cmp << endl;
        for (int j = i + 1; s[j] != cmp && j != s.length(); j++) {
            if (s[j] != cmp) {
                len++;
            }
        }
        for (int j = i + 1; j != s.length(); j++) {
            cmp2 = char(s[j]);
             n = j + 1;
            while ( char(s[n]) != cmp2 && n != s.length()) {
                if (s[n] != cmp2) {
                    len1++;
                    cout << "                 value of len1: " << len1<<endl;
                    n++;
                }
                len1 = 1;
            }
        }
        cout << "       value of len:  " << len << endl;
        if (len > len1) {
            len = 1;
        }

        len2 = len;
        if (len2 > Blen) {
            Blen = len2;
        }
        len = 1;
        len1 = 1;

    }
    cout << endl << endl << "value of BLeN" << Blen;
    //return Blen;
}