#include <iostream>

using namespace std;
//#define PI 3.14  <- C����� ���(��� block���� ���ٰ���)
int main_const()
{	//���:���ϸ� �ȵǴ� ���̶� ����� ���ÿ� �����������.
	// ����ó�� ���� ������ �� ����
	const float PI = 3.14159265; //�ڷ����� �߰���, ������ block������ ��� ����
	int r = 3;
	float s = r * r * PI;

	cout << "���� ����: " << s << endl;

	//�������� ��ȯ
	/*
	1. Ư�� ���������� ������ �ٸ� ���������� ���� �������� ��
	2. ���Ŀ� ���������� ȥ���Ͽ� ������� ��
	3. �Լ��� �Ű������� ������ ��
	*/

	//typeName(a) �Ǵ� (typeName)a�� ������ ��ȯ ����
	char ch = 'M';
	cout << (int)ch <<" "<<int(ch)<< endl;

	//C++:static_cast<typeName>�� �����ϰ� ������ ��ȯ ����

	return 0;
}