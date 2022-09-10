#include <iostream>

using namespace std;
//default parameter:argument에 인수가 없으면 default값이 함수로 복사되서 실행
const int SIZE = 8;
int sumArr(int*, int n = 3);//원형에서 default param을 초기화해야함

int main() {
    int arr[SIZE] = { 1, 2, 4, 8, 16, 32, 64 };
    int sum = sumArr(arr);

    cout << "함수의 총 합은 " << sum << "입니다." << endl;
    return 0;
}

int sumArr(int* arr, int n) { //정의부분은 변수 선언만
    int total = 0;

    for (int i = 0; i < n; i++)
        total += arr[i];

    return total;
}