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
	cout << "���յ�С������Ϊ��" << max;
	return 0;
}