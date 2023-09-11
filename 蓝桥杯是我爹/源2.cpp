#include<iostream>
#include<cstring>
using namespace std;
int main() {
	string s = "efgkmkgfe";//cabac
	int end = s.length()-1;//下标是长度减一
	int mid=0,midl=0,midr=0,count=0,count2=0,jimid = 0;
	int star = 0;
	string ne;
	string endv;
	string endv2;
	cout << "                s.length" << s.length() << endl << endl << "___________________"<<endl;

	while (end > star) {
		if (s[star] == s[end]) {
			mid = (end - star + 1) / 2;

			cout << "mid mid " << mid<< endl;
			if (s.length() % 2 == 0) {//偶数的话left he right 情况
				midl = mid - 1;
				/*midr = mid;*/
				ne = s.substr(mid, mid+1);
				reverse(ne.begin(),ne.end());
				if (s.substr(star, mid+1) == ne) {
					endv = s.substr(star, (end - star + 1));//count = midr * 2;
				}
			}
			else {//奇数情况
				jimid = mid + 1;
				cout << jimid << endl;
				cout << s.substr(star, jimid)<< endl<<endl;
				ne = s.substr(mid, jimid);
				reverse(ne.begin(),ne.end());
				cout << ne<<endl;

				if (s.substr(star, jimid) == ne) {
					endv = s.substr(star, (end - star + 1)); //count = jimid * 2 - 1;
				}
			}
		}
		end--;
	}
	end = s.length() - 1;
	cout << star << "left star      right end" << end << endl;
	while (end > star) {
		if (s[star] == s[end]) {
			mid = star + ((end - star + 1) / 2);
			cout << "mid mid " << mid << endl;
			if (s.length() % 2 == 0) {//偶数的话left he right 情况
				midl = mid - 1;
				
				ne = s.substr(mid, mid+1);
				reverse(ne.begin(), ne.end());
				if (s.substr(star, mid) == ne) {
					endv2 = s.substr(star, (end - star + 1)); //count2 = midr * 2;
				}
			}
			else {//奇数情况
				jimid = mid - star + 1;
				cout << jimid << endl;
				cout << s.substr(star, jimid) << endl << endl;
				ne = s.substr(mid, jimid);
				reverse(ne.begin(), ne.end());
				cout << ne << endl;

				if (s.substr(star, jimid) == ne) {
					endv2 = s.substr(star, (end - star + 1)); //count2 = jimid * 2 - 1;
				}
			}
		}
	star++;
	}

	cout << "a shit TRY!!";
	//cout << max(count, count2) << endl<<endl<<endl<<"____________________";
	cout << "that's the end result" << endl << (endv > endv2 ? endv : endv2);

	//cout << "后到前的值" << count <<"   前到后的value:"<<count2;
}







