#include <iostream>

using namespace std;

void countDown(int n)
{
	cout << "counting..." << n << "\n"; //#code1
	if (n > 0) countDown(n - 1); //�Լ����� �����ϱ� ������ if ���� ������ ������Ű�� #code1�� ��� ����
	cout << n << "��° ����Լ�" << endl; //#if������ false�̸� code2�� ���� ������ �������� ����
}
//n = 5�̸� "counting...5"�� ���, 5>0�̹Ƿ� countDown(4)�� ����
//n = 4�̸� "counting...4"�� ���, 4>0�̹Ƿ� countDown(3)�� ����
//n = 3�̸� "counting...3"�� ���, 3>0�̹Ƿ� countDown(2)�� ����
//... n =0�̸� "counting...0"�� ���, 0>0�� false�̹Ƿ� countDown(n-1)�� �������� �ʰ�,
//"0��° ����Լ�"�� ��� -> "1��° ����Լ�"�� ��� -> ... -> "5��° ����Լ�"�� ����ϰ� ����
//������ LIFO(last in, first out), �� ���� ���߿� ���� n=0�� #code2�� �����Ű�鼭 ���� ������ �������� ����
int main_recur()
{
	countDown(5);

	return 0;
}