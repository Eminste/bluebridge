#include<iostream>

#include<string>
#include <vector>
//二进制,数组
using namespace std;
char toBinary(int n)
{
	char r[8];
	for (int i = 0; n != 0; i++) {
		r += (n % 2 == 0 ? "0" : "1");
		n /= 2;
	}
	return r;
}
int main() {
	int io=10;
	int jud = 0;
	int temp;
	//char bitn[8] = {0}; //长度为8 用以储存二进制的
	vector<char[8]> bit32x8(32, {0}); //长度为8 用以储存二进制的,32个
	//io=10;
	int nums[32] = { 4,0 ,4 ,0, 4 ,0 ,4 ,32 ,-1 ,-16,
		4 ,32, 4 ,32, 4, 32 ,4 ,32, 4 ,32,
		8, 32, 8 ,32, 16, 34, 16 ,34 ,32, 30,
		-64, 0 };
	int len = sizeof(nums)/sizeof(nums[0]);
	for (int i = 0; i < len; i++) {
		*bit32x8[i] = char(toBinary(nums[i]));
	}







	/*for (int m = 0; m != len; m++) {
		for (int i = 0; nums[m] != 0&&i<len ; i++) {
			
			*bit32x8[0] = 1;
			io = io / 2;
			cout << io << "   ,";
			jud++;
			cout << jud << ">" << endl;
		}
		for (int f = jud - 1; f > -1; f--) {
			cout << nums[f];
		}
	}*/

	
}