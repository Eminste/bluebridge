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
		cout << "value of i:" << i << "***************" << endl;

		cout << "value of s[i]:" << s[i] << endl;;
		if (res == false) {
			break;
		}
		if (s[i] == '(' or s[i] == '{' or s[i] == '[') {
			//cout << "value of i:" << i << endl<<"***************";
			int j = (i + 1);
			cout << endl << "-------------" << "value of j:" << j << endl;

			cout << s[j] << endl;
			sign = 0;
				/*while (res !=0) {*/
			if ((s[i] == '(') && (s[j] == ')')) {
				continue;
			}
			if ((s[i] == '{') && (s[j] == '}')) {
				continue;
			}
			if ((s[i] == '[') && (s[j] == ']')) {
				continue;
			}
			res = false;


		}
	}
	cout << res;

}