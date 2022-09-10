#include <iostream>
using namespace std;

int main_new()
{	//new 연산자
	/*
	어떤 데이터형을 원하는지 new 연산자에게 알려주면,
	new 연산자는 그에 알맞은 크기의 메모리 블록을 찾아내고
	그 블록의 주소를 리턴합니다.
	*/
	int a;
	int* b = &a; //이 방법은 포인터 변수와 주소 두가지 방법으로
	//메모리 블록을 찾아냄

	int* pointer = new int;// pointer -> 객체

	//cf)int *a는 C style, int* b는 C++ style인데 둘다 차이 없음

	//delete 연산자
	/*
	사용한 메모리를 다시 메모리 폴로 환수
	환수된 메모리는 프로그램의 다른 부분이 다시 사용
	*/

	//delete 유의할 점
	/*
	1. new로 대입하지 않은 메모리는 delete로 해제할 수 없다
	2. 같은 메모리 블록을 연달아 두 번 delete로 해제할 수 없다.
	3. new[]로 메모리를 대입할 경우 delete[]로 해제한다
	4.대괄호를 사용하지 않았다면 delete도 대괄호를 사용하지 x

	*/
	int* ps = new int;//ps 포인터 변수 ->int형의 메모리를 찾아줘
	delete ps; //사용한 메모리를 환수

	double* p3 = new double[3];//double형 데이터 3개를 저장할 수 있는 공간을 대입
	p3[0] = 0.2;			   //p3를 배열이름처럼 취급
	p3[1] = 0.5;
	p3[2] = 0.8;

	cout << "p3[1] is " << p3[1] << ".\n";
	p3 = p3 + 1; //배열의 위치를 1씩 증가시킴
				//배열명은 연산을 실행시킬 수 없지만, 포인터는 변수처럼 사용할 수 있기 떄문에 값을 변경할 수 있음
	cout << "p3[1] is " << p3[1] << ".\n";
	p3 = p3 - 1; //배열의 위치를 원위치

	delete[] p3; //메모리 환수
	return 0;
}
		





	
