#include <iostream>

using namespace std;

int func(int);
int main()
{ //�Լ��� �����ϴ� ������
	//��� �Լ��� �Լ��� �ּҸ� �Ű������� �Ѱ��ִ� ��� �����ϰ� ����� �� �ִ�.
	/*
	1. �Լ��� �ּҸ� ��´�.(�Լ��� �̸�������)
	2. �Լ��� �����ϴ� �����͸� ����
	3. �Լ��� �����ϴ� �����͸� ����Ͽ� �� �Լ��� ȣ��
	*/
	int (* pt)(int);//Here "pt" is a function pointer which can store the address of a function taking integer argument and returning an integer.
	//int* p() vs int(*p)() : �Ѵ� argument�� ������, 
							//���ڴ� p�Լ��� int�� �����͸� ��ȯ, ���ڴ� *p �Լ��� intger ���� ��ȯ
	pt = func; //�̼Ǹ��� func�� �ּҸ� ����Ŵ
	
	cout << (*pt)(3) << endl;
	return 0;
}

int func(int n)
{
	return n + 1;
}