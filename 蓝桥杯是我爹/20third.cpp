#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main() {
	string s = "(])";
	int l = int(s.length());
	int end = l;
	bool res = 1;
	int a = 0;

	if (l == 1) {
		res = false;
	}else{
		if (s[0] == ')' or s[0] == '}' or s[0] == ']') {
			res = false;
		}
		else {
			for (int i = 0; i < l; i++) {
				if (s[0] == ')' or s[0] == '}' or s[0] == ']') {
					res = false;
					break;
				}

				cout << "*******s[i]  :" << s[i] << endl;

				if ((end - i) == 1) {
					cout << "why not enter here?" << endl;
					res = false;
				}
				if (res == false) {
					break;
				}
				if (s[i] == '(' or s[i] == '{' or s[i] == '[') {
					int j = i + 1;
					cout << "value of i is:" << i << endl;
					
					for (j; j < end; j++) {
						cout << "----s[j]  :" << s[j] << "  --------" << endl;
						if ((s[i] == '(') && (s[j] == ')')) {
							a = max(a, j);
							end = j;
							cout << "the value of j to end" << end << endl;
							break;
						}
						if ((s[i] == '{') && (s[j] == '}')) {
							a = max(a, j);
							end = j;
							break;
						}
						if ((s[i] == '[') && (s[j] == ']')) {

							cout << "value of i is:" << i << endl << endl;
							a = max(a, j);
							end = j;
							break;
						}
						if (j == (end - 1)) {

							cout << "howhowhow???";
							res = false;
							break;
						}
					}
					if ((end - i) == 1) {
						i = a;
						end = l;
					}
				}
			}
		}

	}
	
	cout<<"res value :" << res;
}