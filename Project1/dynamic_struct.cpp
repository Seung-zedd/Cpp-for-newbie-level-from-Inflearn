#include <iostream>

using namespace std;

struct MyStruct//����ü�� �Լ��� ���������� ��ó���⿡�� �̸� �����ؾ���.
{              //main ������ �����ϸ� �޸𸮸� ��Ƹ��� ����
    char name[20];
    int age;
};

int main() {

    MyStruct* temp = new MyStruct;//struct���� �޸𸮸� ã����!
                                  //�޸� �����Ҳ���
    cout << "����� �̸��� �Է��Ͻʽÿ�.\n";
    cin >> temp->name;//��������ü�� '->' �� ���

    cout << "����� ���̸� �Է��Ͻʽÿ�.\n";
    cin >> (*temp).age; //������ ����:��� ������> ������ ������

    cout << "�ȳ��ϼ���! " << temp->name << "��!\n";
    cout << "����� " << temp->age << "�� �̱���!\n";

    delete temp;
    return 0;
}