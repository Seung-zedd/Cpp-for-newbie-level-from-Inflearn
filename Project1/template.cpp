#include <iostream>

using namespace std;

//class 혹은 typeName
template <class Any>
Any sum(Any, Any);

template <class Any>
Any sum(int, Any);
int main_temp()
{	//함수 템플릿
	//구체적인 데이터형을 포괄할 수 있는 일반형으로 함수를 정의
	int a = 3, b = 4;

	float c = 3.14, d = 1.592;
	/*cout << sum(a, b) << endl;*///템플릿 둘다 Any->int형으로 인식해서 오버로딩 실패(오버로딩 안되는 case2에 해당)
	cout << sum(c, d) << endl; //float형을 반환
	cout << sum(a, c) << endl;//int형 a와 float형 c를 더했는데 반환형이 any이므로 float를 반환한다
	
	return 0;
}

template <class Any>
Any sum(Any a, Any b)
{
	return a + b;
}

template <class Any>
Any sum(int a, Any b)
{
	return a + b;
}
