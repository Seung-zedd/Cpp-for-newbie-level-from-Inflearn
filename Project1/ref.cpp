#include <iostream>

using namespace std;
void swapA(int&, int&);
void swapB(int*, int*);
void swapC(int, int);

//swap함수:값에 의한 복사, 참조에 의한 복사, 포인터에 의한 복사

int main_ref()
{
	int wallet1 = 100, wallet2 = 200;
	
	cout << "최초의 값\n";
	cout <<"wallet1 ="<< wallet1 << ", wallet2 =" << wallet2 << endl;

	cout << "참조의 의한 값의 교환\n";
	swapA(wallet1, wallet2);
	cout << "wallet1 =" << wallet1 << ", wallet2 =" << wallet2 << endl;

	cout << "포인터를 이용한 값의 교환\n";
	swapB(&wallet1, &wallet2);
	cout << "wallet1 =" << wallet1 << ", wallet2 =" << wallet2 << endl;

	cout << "값을 이용한 값의 교환\n";
	swapC(wallet1, wallet2);
	cout << "wallet1 =" << wallet1 << ", wallet2 =" << wallet2 << endl;



	return 0;
}

void swapA(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void swapB(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}


void swapC(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;

}