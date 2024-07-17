#include<iostream>
using namespace std;
int main()
{
	int arr[5] = { 100,20,300,50,450 };
	int max = 0;
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
	{
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	cout << "最终的小猪体重为：" << max;
	return 0;
}