#include <iostream>

using namespace std;
//#define PI 3.14  <- C언어의 방식(모든 block에서 접근가능)
int main_const()
{	//상수:변하면 안되는 값이라 선언과 동시에 대입해줘야함.
	// 변수처럼 값을 수정할 수 없음
	const float PI = 3.14159265; //자료형이 추가됨, 지정된 block에서만 사용 가능
	int r = 3;
	float s = r * r * PI;

	cout << "원의 넓이: " << s << endl;

	//데이터형 변환
	/*
	1. 특정 데이터형의 변수에 다른 데이터형의 값을 대입했을 때
	2. 수식에 데이터형을 혼합하여 사용했을 때
	3. 함수에 매개변수를 전달할 때
	*/

	//typeName(a) 또는 (typeName)a로 강제적 변환 가능
	char ch = 'M';
	cout << (int)ch <<" "<<int(ch)<< endl;

	//C++:static_cast<typeName>도 동일하게 강제적 변환 가능

	return 0;
}