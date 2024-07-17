#include<iostream>
using namespace std;
int main()
{
	//先创建数组
	int arr[ ] = { 10,50,2,41,12,45,70,4,7,2,8,3,9,4,77,44 };
	//用嵌套循环，从第一个开始循环
	cout << "数组元素排序前：";
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i]<<" ";
	}
	cout << endl;
	for (int start = 0; start < sizeof(arr) / sizeof(arr[0])-1; start++)
	{
		for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) - start-1; i++) {
			if (arr[i]>arr[i+1])
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
	cout << "数组元素从小到大排序后：";
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i]<<" ";
	}

	return 0;
}