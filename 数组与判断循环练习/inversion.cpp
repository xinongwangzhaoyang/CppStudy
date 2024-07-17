#include<iostream>
using namespace std;
int main()
{
	int arr[5] = { 1,3,2,5,4 };
	cout << "数组元素逆置前：";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] ;
	}
	//倒置
	int start = 0;//开始下标
	int end = sizeof(arr) / sizeof(arr[0]) - 1;//结束下标
	cout << endl;
	while (start<end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		start++;
		end--;

	}
	cout << "数组元素逆置后：";
	for (int i = 0; i < 5; i++)
	{
		cout  << arr[i] ;
	}

	return 0;
}