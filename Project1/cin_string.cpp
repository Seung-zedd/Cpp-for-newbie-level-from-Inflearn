#include <iostream>
#include <cstring> //strlen() �Լ��� ����ϱ� ���ؼ�
using namespace std;

int main()
{
	const int Size = 15;
	char name1[Size];
	char name2[Size] = "C++programming";

	cout << "�ȳ��ϼ���! ���� " << name2;
	cout << "�Դϴ�! ������ ��� �ǽó���?\n";
	//cin >> name1;
	cin.getline(name1, Size); //white space(enter,space,tab ������ ����)���� ������
	cout << "��, " << name1 << "��, ����� �̸��� ";
	cout << strlen(name1) << " ���Դϴٸ�\n";
	cout << sizeof(name1) << " ����Ʈ ũ���� �迭�� ����Ǿ����ϴ�.\n";
	cout << "�̸���" << name1[0] << " �ڷ� �����ϴ±���.\n";
	name2[3] = '\0'; //null ���ڸ� ���������Ƿ�
	cout << "�� �̸��� ó�� �� ���ڴ� ������ �����ϴ�: ";
	cout << name2 << endl; //C++������ ���

	//�迭�� �Ǵٸ� �迭�� �����ϴ� ���� �Ұ���������, string�� ����
	//string�� C��Ÿ���� �迭�� �ʱ�ȭ ����

	char char1[20];
	char char2[20] = "jaguar";
	string str1;
	string str2 = "panda";

	//char1 = char2;
	str1 = str2;
	cout << str1 << endl;

	return 0;
}