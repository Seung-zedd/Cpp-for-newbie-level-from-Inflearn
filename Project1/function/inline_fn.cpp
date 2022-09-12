#include <iostream>

using namespace std;
//인라인 함수를 사용하여 실행속도를 높여준다(스택에 메모리 저장안해도 되므로)
inline float square(float x) { return x * x; } //: 인라인함수는 컴파일러가 연산을 하기때문에 오류 가능성 줄어듦
											//인라인함수는 자료형을 명시하니까 return도 해줘야함 
//#define square(x) x*x 
//매크로는 전처리기에서 함수를 호출하기 때문에 연산오류 가능성있음, 가독성도 낮음, 디버깅하기 어려움
int main_inline()
{
	float a = 5.;
	float(b) = square(a+1);//expected return:36

	cout << b << endl;



	return 0;
}