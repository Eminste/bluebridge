#include<iostream>
#include<string>
using namespace std;
int main() {

	int numst = -4;
	int nnt = 0;
	string temp = "",res = "",revres = "";
	int revfor = 0;
	if (numst < 0) {
		nnt = (-numst);
		for (int i = 0; i < 8; i++) {
			temp = to_string(nnt % 2);
			nnt = nnt / 2;
			res = temp + res;
		}
		revres = res;
		
		for (int ai = 7; ai >= 0; ai--) {
			if (revres[ai] == '1') {
				revfor = ai;
				for (int jj = 0; jj < revfor; jj++) {
					if (revres[jj] == '0') {
						revres[jj] = '1';
					}
					else {
						revres[jj] = '0';
					}
				}
				revres[0] = '1';
				break;
			}
		}
		/*res[i32] = "1" + res[i32];*/
	}

	cout << res<< "and is's reverse" << revres;
}
		 