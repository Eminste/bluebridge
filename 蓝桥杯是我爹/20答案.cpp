#include<iostream>
#include<string>
#include<unordered_map>
#include<stack>
using namespace std;
int main() {
	string s = "{[]}";
	int l = s.length();
	bool res = true;
	unordered_map<char, char> pair{
		{')','('},
		{']','['},
		{'}','{'}
	};
	
	if ( ((l % 2) == 1) || (l<1) ) {
		res = false;
	}
	else {
		stack<char> stack;
		for (int i = 0; i < l; i++) {
			if (pair.count(s[i])) {
				if (stack.empty() || stack.top() != pair[s[i]]) {
					cout << "why enter here" << endl;
					res = false;
					break;
				}
				else {
					stack.pop();
				}
			}
			else {
				stack.push(s[i]);
			}
			
		}
	}
	cout << res;
}