#include <iostream>

using namespace std;

int main()
{	//����ü(union)
	//���� �ٸ� ���������� �ѹ��� �� ������ ������ �� ����.

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
	//���� �����͸� ������ ������ ������ �����ߴ� �����Ͱ� �ս�
	//->�޸𸮸� �����Ѵٴ� ������ ����.

	//����ü(enum)
	//��ȣ ����� ����� �Ϳ� ���� �Ǵٸ� ���

	enum spectrum {red,orange,yellow,green
		,blue,violet,indigo, ultraviolet };
	/*
	1. spectrum�� ���ο� �������� �̸����� �����.
	2. red,orange, yellow ..�� 0~7������ ��ȣ����� �����.
	3. ���� �����ڿ� ���������� �ʱ�ȭ�ϸ�, �� ������ �ʱ�ȭ���� ����
	�����ڴ� ���� ������ + 1 �� ����.
	*/
	spectrum a = orange; //�����ڵ鳢���� ������ �ȵ�!
	cout << a << endl;

	int b = blue;
	b = blue + 3; //�����ڸ� int������ ��ȯ�ϸ� ���� ����
	cout << b << endl;
	return 0;
}