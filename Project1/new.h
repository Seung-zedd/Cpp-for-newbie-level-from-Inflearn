#include <iostream>

#define STRUCT

#ifndef STRUCT //STRUCT�� �������� �ʾҴٸ�
			   //�Ʒ����κ��� #endif������ ���Խ��Ѷ�

using namespace std;
//����ü ����
struct MyStruct
{
	string name;
	int age;

};
void display(MyStruct&);//var��� ���ص� ��

#endif STRUCT 
