#include <iostream>
#include "new.h"


#ifdef STRUCT //STRUCT를 정의했다면
#define STRUCT//아래라인부터 #endif전 라인까지 포함시켜라

 //기호상수를 STRUCT로 정의하라.
using namespace std;
//구조체 선언
struct MyStruct
{
	string name;
	int age;

};
void display(MyStruct&);//var명시 안해도 됨

#endif STRUCT // 나머지 라인은 무시
//결론:헤더파일의 중복을 방지하려면, #ifndef, #ifdef,# endif를 
//적절히 사용하자