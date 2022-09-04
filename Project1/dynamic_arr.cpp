#include <iostream>

using namespace std;
#define SIZE 20
int main_dynamic_arr()
{
	char animal[SIZE];//배열로 animal 크기를 선언
	char* ps;// char형의 포인터 변수

	cout << "동물 이름을 입력하십시오:";
	cin.getline(animal, SIZE);

	ps = new char[strlen(animal)+1]; // 입력받은 animal의 길이값을 ps에 충분한 char형 동적 메모리 할당
									 //널 문자때문에 +1, 안하면 error 발생
	strcpy(ps, animal); //animal을 ps로 복사

	cout << "입력하신 동물 이름을 복사하였습니다" << endl;
	cout << "입력하신 동물 이름은 " << animal << "이고, 그 주소는 " << (int*)animal << " 입니다." << endl;
	cout << "복사된 동물 이름은 " << ps << "이고, 그 주소는 " << (int*)ps << " 입니다." << endl;

	delete[] ps; //할당한 메모리를 환수

	return 0;
}