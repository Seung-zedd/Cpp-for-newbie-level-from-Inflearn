#include <iostream>

using namespace std;

void countDown(int n)
{
	cout << "counting..." << n << "\n"; //#code1
	if (n > 0) countDown(n - 1); //함수명이 동일하기 때문에 if 안의 조건을 만족시키면 #code1을 계속 실행
	cout << n << "번째 재귀함수" << endl; //#if조건이 false이면 code2를 쌓인 스택의 역순으로 실행
}
//n = 5이면 "counting...5"을 출력, 5>0이므로 countDown(4)를 실행
//n = 4이면 "counting...4"을 출력, 4>0이므로 countDown(3)을 실행
//n = 3이면 "counting...3"을 출력, 3>0이므로 countDown(2)를 실행
//... n =0이면 "counting...0"을 출력, 0>0은 false이므로 countDown(n-1)를 실행하지 않고,
//"0번째 재귀함수"를 출력 -> "1번째 재귀함수"를 출력 -> ... -> "5번째 재귀함수"를 출력하고 종료
//스택은 LIFO(last in, first out), 즉 가장 나중에 들어온 n=0이 #code2를 실행시키면서 쌓인 스택의 역순으로 실행
int main_recur()
{
	countDown(5);

	return 0;
}