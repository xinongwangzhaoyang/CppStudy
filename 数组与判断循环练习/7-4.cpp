#include<iostream>
using namespace std;
int main()
{
	//敲桌子
	//1、先输出1~100数字
	for (int i = 1; i <= 100; i++) {
		if (i % 7 == 0|| i % 10 == 7 || i / 10 == 7) {
			cout << "敲桌子" << endl;
		}
		
		else
		{
			cout << i << endl;
		}

	}
	return 0;
}