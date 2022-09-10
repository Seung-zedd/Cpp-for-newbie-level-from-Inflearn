#include <iostream>

using namespace std;

int sumArr(int arr[], int n);
const int SIZE = 8;
int main_fn_arr()
{
	int arr[SIZE] = { 1,2,4,8,16,32,64,128 };
	int sum = sumArr(arr, SIZE);

	cout << "함수의 총 합은 " << sum << " 입니다" << endl;


	return 0;
}

int sumArr(int arr[], int n)//둥근괄호는 배열을 포인터 변수처럼 쓴다
{
	int total = 0;
	for (int i = 0; i < n; i++)
	{
		total += arr[i];
	}

	return total;

}