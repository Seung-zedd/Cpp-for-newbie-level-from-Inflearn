#include <iostream>

using namespace std;

int main()
{	//공용체(union)
	//서로 다른 데이터형을 한번에 한 가지만 보관할 수 있음.

	union MyUnion
	{
		int intVal;
		long longVal;
		float floatVal;
	};

	/*MyUnion test;
	test.intVal = 3;
	cout << test.intVal << endl;
	test.longVal = 33;
	cout << test.intVal << endl;
	cout << test.longVal << endl;
	test.floatVal = 3.3;
	cout << test.intVal << endl;
	cout << test.longVal << endl;
	cout << test.floatVal << endl;*/
	//다음 데이터를 보관할 때마다 이전에 보관했던 데이터가 손실
	//->메모리를 절약한다는 장점이 있음.

	//열거체(enum)
	//기호 상수를 만드는 것에 대한 또다른 방법

	enum spectrum {red,orange,yellow,green
		,blue,violet,indigo, ultraviolet };
	/*
	1. spectrum을 새로운 데이터형 이름으로 만든다.
	2. red,orange, yellow ..를 0~7까지의 기호상수로 만든다.
	3. 만약 열거자에 정수값으로 초기화하면, 그 다음의 초기화되지 않은
	열거자는 이전 정수값 + 1 을 가짐.
	*/
	spectrum a = orange; //열거자들끼리의 연산은 안됨!
	cout << a << endl;

	int b = blue;
	b = blue + 3; //열거자를 int형으로 변환하면 연산 가능
	cout << b << endl;
	return 0;
}