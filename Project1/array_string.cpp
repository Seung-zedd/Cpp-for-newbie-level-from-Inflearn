#include <iostream>

using namespace std;

int main_arr()
{	//typeName arrayName[arraySize]; �� ���𰡴�(��C������ ������ �����ڰ� �־ char name[255]�� ���� char���� �������� ����)
	//�迭�� ����� ���ÿ� ������ �������(�ʱ�ȭ)
	short month[4] = { 1,2,3 };
	
	
	cout << month[2] << endl;

	//���ڿ�: ������ ��
	char a[] = { 'H','E','L','L','O'};//�����Ϸ��� �ι��ڸ� ��ã�Ƽ� �̻��ϰ� ���
	char b[] = "Hello";//string���� �ι��ڰ� ���ԵǼ� ���������� ���
	cout << a <<" " << b << endl;
	return 0;
}