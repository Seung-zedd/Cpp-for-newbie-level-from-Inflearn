#include <iostream>

using namespace std;

int main()
{	//����ü : �ٸ� ���������� ���Ǵ� �������� ����
	//cf) �迭 : ���� ���������� ����

	//�౸����

	struct MyStruct
	{
		string name;
		string position;
		float height;
		float weight;
	} B; // ��C����� typedef�� �޸� �ٷ� �����ݷ� �տ� ���𰡴�
	
	//C���� ���� ��������ڷ� �ʱ�ȭ
	MyStruct A;
	A.name = "Son"; 
	A.position = "Striker";
	A.height = 183;
	A.weight = 77;
	
	//�Ǵ� ����ü�� JS�� ��üó�� �ʱ�ȭ ����
	MyStruct A = {
		"Son",
		"Striker",
		183,
		77
	};
	//��ü�� �ʱ�ȭ�ص� ����� ��� �����ڷθ� ����
	cout << A.name << endl;
	cout << A.position << endl;
	cout << A.height << endl;
	cout << A.weight << endl;
	
	//����ü�� �迭�� �ʱ�ȭ ����
	MyStruct C[2] = {
		{"A","A",1,1},
		{"B","B",2,2},
	};

	cout << C[0].height << endl; //index�� ����ü�� ������ ����
	
	cout << B.name << endl;

	return 0;
}