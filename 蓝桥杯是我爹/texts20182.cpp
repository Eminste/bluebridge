#include<iostream>
using namespace std;
int main() {
	short a = -4;
	short num[8] = { 0 };
	//for (int i = 0; i < 8; i++) {
	//	num[i] = 0;
	//}
	int b = 0;
	if (a < 0) {
		b = ( - a) - 1;
		int i = 7;
		cout << "value of bis" << b;
		while (b) {
			num[i] = b%2;
			i--;
			b = b / 2;
		}

		for (int j = 0; j < 8; j++) {
			if (num[j] == 0) {
				num[j] = 1;
			}
			else {
				num[j] = 0;
			}
		}
	}
	for (int k = 7; k > -1; k--) {
		cout << "the value of num " << k << ":" << num[k] << endl;

	}
	
}