#include<iostream>
#include<string>
using namespace std;
int main() {
	bool res = true;
	string s = "([)]";
	int l = s.length();
	int sign = 0;
	cout << "value of l:" << l << endl;
	for (int i = 0; i < l; i++) {
		cout << "value of i:" << i << "***************"<<endl;

		cout << "value of s[i]:" << s[i] << endl;;
		if (res == false) {
			break;
		}
		if (s[i] == '(' or s[i] == '{' or s[i] == '[') {
			//cout << "value of i:" << i << endl<<"***************";

			cout << "i am in here lokk at me!!!";
			for (int j = (i+1); j < l; j++) {
				cout <<endl<<"-------------" << "value of j:" << j << endl;

				cout << s[j]<<endl;
				sign = 0;
				/*while (res !=0) {*/
					if (sign == 1) {
						break;
					}
					if ((s[i] == '(') && (s[j] == ')')) {
						sign = 1;
						break;
					}
					if (( s[i] == '{') && (s[j] == '}')) {
						sign = 1;
						break;
					}
					if ((s[i] == '[') && (s[j] == ']')) {
						sign = 1;
						break;
					}
					if (j == (l-1)) {
						res =0;
						break;
					}
					continue;

				
				if (sign == 1) {
					break;
				}
				if (res == 0) {
					break;
				}

			}

			if (res ==0) {
				break;
			}

		}
	}
	cout << res;
	
}