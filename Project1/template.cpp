#include <iostream>

using namespace std;

//class Ȥ�� typeName
template <class Any>
Any sum(Any, Any);

template <class Any>
Any sum(int, Any);
int main()
{	//�Լ� ���ø�
	//��ü���� ���������� ������ �� �ִ� �Ϲ������� �Լ��� ����
	int a = 3, b = 4;

	float c = 3.14, d = 1.592;
	cout << sum(a, b) << endl;//���ø� �Ѵ� int������ �ν��ؼ� �����ε� ����(�����ε� �ȵǴ� case2�� �ش�)
	cout << sum(c, d) << endl; //float���� ��ȯ
	cout << sum(a, c) << endl;//int�� a�� float�� c�� ���ߴµ� ��ȯ���� any�̹Ƿ� float�� ��ȯ�Ѵ�
	
	return 0;
}

template <class Any>
Any sum(Any a, Any b)
{
	return a + b;
}

template <class Any>
Any sum(int a, Any b)
{
	return a + b;
}