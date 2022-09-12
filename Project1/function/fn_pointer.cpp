#include <iostream>

using namespace std;

int func(int);
int main_fn_point()
{ //함수를 지시하는 포인터
	//어떠한 함수에 함수의 주소를 매개변수로 넘겨주는 경우 유용하게 사용할 수 있다.
	/*
	1. 함수의 주소를 얻는다.(함수의 이름만으로)
	2. 함수를 지시하는 포인터를 선언
	3. 함수를 지시하는 포인터를 사용하여 그 함수를 호출
	*/
	int (* pt)(int);//Here "pt" is a function pointer which can store the address of a function taking integer argument and returning an integer.
	//int* p() vs int(*p)() : 둘다 argument가 없지만, 
							//전자는 p함수가 int형 포인터를 반환, 후자는 *p 함수가 intger 값을 반환
	pt = func; //미션맨은 func의 주소를 가리킴
	
	cout << (*pt)(3) << endl;//역참조를 사용해서 func 주소의 실제값에 접근
	return 0;
}

int func(int n)
{
	return n + 1;
}
