#include <iostream>

using namespace std;
void swapA(int&, int&);
void swapB(int*, int*);
void swapC(int, int);

//swap�Լ�:���� ���� ����, ������ ���� ����, �����Ϳ� ���� ����

int main_ref()
{
	int wallet1 = 100, wallet2 = 200;
	
	cout << "������ ��\n";
	cout <<"wallet1 ="<< wallet1 << ", wallet2 =" << wallet2 << endl;

	cout << "������ ���� ���� ��ȯ\n";
	swapA(wallet1, wallet2);
	cout << "wallet1 =" << wallet1 << ", wallet2 =" << wallet2 << endl;

	cout << "�����͸� �̿��� ���� ��ȯ\n";
	swapB(&wallet1, &wallet2);
	cout << "wallet1 =" << wallet1 << ", wallet2 =" << wallet2 << endl;

	cout << "���� �̿��� ���� ��ȯ\n";
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