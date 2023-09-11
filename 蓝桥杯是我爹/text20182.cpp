#include<iostream>
using namespace std;
int main() {
	int a = 4;
	int nums[32] = { 4,0 ,4 ,0, 4 ,0 ,4 ,32 ,-1 ,-16,
	4 ,32, 4 ,32, 4, 32 ,4 ,32, 4 ,32,
	8, 32, 8 ,32, 16, 34, 16 ,34 ,32, 30,
	-64, 0 };//一个字的源数据

	int but[32][8] = { 0 };


	int i = 0;
	int k = 0;
	for (k = 0; k < 32; k++) {
		for (i = 0; i < 8; i++) {
			but[k][i] = 0;
		}
	}//先把存储二进制的全部化为0
	for (int m = 0; m < 32; m++) {
		i = 7;
		while (nums[m]) {
			but[m][i] = nums[m] % 2;
			i--;
			nums[m] = nums[m] / 2;

		}
		if (nums[m] == 0) {
			continue;
		}
	}


	k = 0;
	i = 7;
	while (a) {
		but[k][i] =a % 2;
		i--;
		a = a / 2;
	}
	for (int j = 0; j < 8; j++) {
		cout << but[j];
	}
}
