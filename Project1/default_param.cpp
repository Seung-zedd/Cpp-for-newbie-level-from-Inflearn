#include <iostream>

using namespace std;
//default parameter:argument�� �μ��� ������ default���� �Լ��� ����Ǽ� ����
const int SIZE = 8;
int sumArr(int*, int n = 3);//�������� default param�� �ʱ�ȭ�ؾ���

int main() {
    int arr[SIZE] = { 1, 2, 4, 8, 16, 32, 64 };
    int sum = sumArr(arr);

    cout << "�Լ��� �� ���� " << sum << "�Դϴ�." << endl;
    return 0;
}

int sumArr(int* arr, int n) { //���Ǻκ��� ���� ����
    int total = 0;

    for (int i = 0; i < n; i++)
        total += arr[i];

    return total;
}