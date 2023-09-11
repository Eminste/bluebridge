#include<iostream>
#include<cstring>
#include <string>
using namespace std;
int main() {
	int nums[32] = { 4,0 ,4 ,0, 4 ,0 ,4 ,32 ,-1 ,-16,
					 4 ,32, 4 ,32, 4, 32 ,4 ,32, 4 ,32,
					 8, 32, 8 ,32, 16, 34, 16 ,34 ,32, 30,
					-64, 0 };
	int a = 4;
	string res[32] = {""};
	string temp = "";
	int aa = 0;
	int numst = 0;
	int revfor = 0;
	string revres = "";
	for (int i32 = 0; i32 < 32; i32++) {
		numst = nums[i32];
		if (numst >= 0) {
			for (int i = 0; i < 7; i++) {
				temp = to_string(numst % 2);
				numst = numst / 2;
				res[i32] = temp + res[i32];
			}
			res[i32] = "0" + res[i32];
		}
		else if (numst < 0) {
			numst = ( - numst ) ;
			for (int i = 0; i < 8; i++) {
				temp = to_string(numst % 2);
				numst = numst / 2;
				res[i32] = temp + res[i32];
			}
			revres = res[i32];
			for (int ai = 7; ai >= 0; ai--) {
				if (revres[ai] == '1') {
					revfor = ai;
					for (int jj = 0; jj < revfor; jj++) {
						if (revres[jj] == '0') {
							revres[jj] = '1';
						}else {
							revres[jj] = '0';
						}
					}
					revres[0] = '1';
					res[i32] = revres;
					break;
				}
			}
		}
	}

	for (int kk = 0; kk < 32; kk++) {
		cout << kk<<"¸ö of "<<nums[kk] << " : " << res[kk] << endl;
	}
	cout << "here every words is:" << endl;
	string fin = "";
	for (int i = 0; i < 32; i++) {
		fin = res[i];
		for (int j= 0; j < 8; j++) {
			if (fin[j] == '1') {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		if ((i % 2) == 1) {
			cout << endl;
		}
	}

	
}