#include <iostream>
#include "new.h"


#ifdef STRUCT //STRUCT�� �����ߴٸ�
#define STRUCT//�Ʒ����κ��� #endif�� ���α��� ���Խ��Ѷ�

 //��ȣ����� STRUCT�� �����϶�.
using namespace std;
//����ü ����
struct MyStruct
{
	string name;
	int age;

};
void display(MyStruct&);//var��� ���ص� ��

#endif STRUCT // ������ ������ ����
//���:��������� �ߺ��� �����Ϸ���, #ifndef, #ifdef,# endif�� 
//������ �������