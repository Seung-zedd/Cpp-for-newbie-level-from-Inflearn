#include <iostream>

using namespace std;

int sumArr(int arr[], int n);
const int SIZE = 8;
int main_fn_arr()
{
	int arr[SIZE] = { 1,2,4,8,16,32,64,128 };
	int sum = sumArr(arr, SIZE);

	cout << "�Լ��� �� ���� " << sum << " �Դϴ�" << endl;


	return 0;
}

int sumArr(int arr[], int n)//�ձٰ�ȣ�� �迭�� ������ ����ó�� ����
{
	int total = 0;
	for (int i = 0; i < n; i++)
	{
		total += arr[i];
	}

	return total;

}