#include <iostream>

using namespace std;
#define SIZE 20
int main_dynamic_arr()
{
	char animal[SIZE];//�迭�� animal ũ�⸦ ����
	char* ps;// char���� ������ ����

	cout << "���� �̸��� �Է��Ͻʽÿ�:";
	cin.getline(animal, SIZE);

	ps = new char[strlen(animal)+1]; // �Է¹��� animal�� ���̰��� ps�� ����� char�� ���� �޸� �Ҵ�
									 //�� ���ڶ����� +1, ���ϸ� error �߻�
	strcpy(ps, animal); //animal�� ps�� ����

	cout << "�Է��Ͻ� ���� �̸��� �����Ͽ����ϴ�" << endl;
	cout << "�Է��Ͻ� ���� �̸��� " << animal << "�̰�, �� �ּҴ� " << (int*)animal << " �Դϴ�." << endl;
	cout << "����� ���� �̸��� " << ps << "�̰�, �� �ּҴ� " << (int*)ps << " �Դϴ�." << endl;

	delete[] ps; //�Ҵ��� �޸𸮸� ȯ��

	return 0;
}