#include<iostream>
using namespace std;
int main()
{
	int arr[5] = { 1,3,2,5,4 };
	cout << "����Ԫ������ǰ��";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] ;
	}
	//����
	int start = 0;//��ʼ�±�
	int end = sizeof(arr) / sizeof(arr[0]) - 1;//�����±�
	cout << endl;
	while (start<end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		start++;
		end--;

	}
	cout << "����Ԫ�����ú�";
	for (int i = 0; i < 5; i++)
	{
		cout  << arr[i] ;
	}

	return 0;
}