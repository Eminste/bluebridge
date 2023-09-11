#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main() {
	int a = -4;
	int aa = 0;
	string temp = "";
	string res = "";
	if (a < 0) {
		aa = (-a) - 1;

		for (int i = 0; i < 7; i++) {
			temp = to_string(aa % 2);
			aa = aa / 2;
			res = temp + res;
		}
		res = "1" + res;
	}

	cout << "value of aa is :" << aa << "value of res is: " << res;

}