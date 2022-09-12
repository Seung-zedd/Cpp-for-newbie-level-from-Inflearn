#include "struct.h"

void display(MyStruct& temp)//temp라는 참조자변수가 구조체를 참조함
{
	cout << "이름:" << temp.name << "\n";
	cout << "나이:" << temp.age << endl;
}