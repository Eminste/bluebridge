#include<iostream>
using namespace std;
int * toBIT(int n);

int* Tobirnary(int n) {
	int bitn[8] = { 0 };
	int* p=new int[8];
	
	for (int i = 0; n != 0; i++) {
		bitn[i] = n % 2;
		n /= 2;
	}
	for (int j = 7, i = 0; j > -1 && i < 8; j--, i++) {
		p[i] = bitn[j];
	}
	
	return p;
}

inline int * toBIT(int n) {
	int bitn[8] = { 0 };
	int* p=new int;

	int AB = 0;
	int mut;
	if (n == 0) {
		p = 0x00;
		return p;
	}else if(n > 0) {
		p = Tobirnary(n);
		return p;
	}else if (n < 0) {
		AB = abs(n);
		mut=AB ^ 0xff;
		mut += 1;
		p = Tobirnary(mut);

		return p;
	}
}
int main() {
	
	int *p=toBIT(-9);
	cout << endl << "mainÀïÃæ";
	for (int i = 0; i < 8; i++) {
		cout << p[i];
	}



	//int nums[32]= { 4,0 ,4 ,0, 4 ,0 ,4 ,32 ,-1 ,-16,
	//	4 ,32, 4 ,32, 4, 32 ,4 ,32, 4 ,32,
	//	8, 32, 8 ,32, 16, 34, 16 ,34 ,32, 30,
	//	-64, 0 };
	//int *BITnums[32];
	//for (int i = 0; i < 32; i++) {
	//	BITnums[i] = toBIT(nums[i]);
	//}
	//for (int i = 0; i < 32; i++) {
	//	for (int j = 0; j < 8; j++) {
	//		if (int(BITnums[i]) == 1) {
	//			cout << "*";
	//		}
	//		else {
	//			cout << " ";
	//		}
	//		BITnums[i] = BITnums[i] + 1;
	//	}
	//}
	
	
}