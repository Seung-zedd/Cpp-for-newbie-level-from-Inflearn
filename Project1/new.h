#include <iostream>

#define STRUCT

#ifndef STRUCT //STRUCT를 정의하지 않았다면
			   //아래라인부터 #endif전까지 포함시켜라

using namespace std;
//구조체 선언
struct MyStruct
{
	string name;
	int age;

};
void display(MyStruct&);//var명시 안해도 됨

#endif STRUCT 
