#include <iostream>

using namespace std;

int main()
{	//typeName arrayName[arraySize]; 로 선언가능(↔C에서는 포인터 연산자가 있어서 char name[255]와 같이 char형만 가능함을 유의)
	short month[4] = { 1,2,3 };
	
	
	cout << month[2] << endl;

	//문자열: 문자의 열
	char a[] = { 'H','E','L','L','O'};//컴파일러가 널문자를 못찾아서 이상하게 출력
	char b[] = "Hello";//string에는 널문자가 포함되서 정상적으로 출력
	cout << a <<" " << b << endl;
	return 0;
}