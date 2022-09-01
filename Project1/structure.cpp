#include <iostream>

using namespace std;

int main()
{	//구조체 : 다른 데이터형이 허용되는 데이터의 집합
	//cf) 배열 : 같은 데이터형의 집합

	//축구선수

	struct MyStruct
	{
		string name;
		string position;
		float height;
		float weight;
	} B; // ↔C언어의 typedef와 달리 바로 세미콜론 앞에 선언가능
	
	//C언어와 같이 멤버연산자로 초기화
	MyStruct A;
	A.name = "Son"; 
	A.position = "Striker";
	A.height = 183;
	A.weight = 77;
	
	//또는 구조체를 JS의 객체처럼 초기화 가능
	MyStruct A = {
		"Son",
		"Striker",
		183,
		77
	};
	//객체로 초기화해도 출력은 멤버 연산자로만 가능
	cout << A.name << endl;
	cout << A.position << endl;
	cout << A.height << endl;
	cout << A.weight << endl;
	
	//구조체를 배열로 초기화 가능
	MyStruct C[2] = {
		{"A","A",1,1},
		{"B","B",2,2},
	};

	cout << C[0].height << endl; //index로 구조체에 접근이 가능
	
	cout << B.name << endl;

	return 0;
}