#include <iostream>

using namespace std;
//구조체를 더하는 함수 + 더한 값을 출력하는 함수
struct Time
{
	int hours;
	int mins;
};
Time sum(Time*, Time*);//구조체를 더하는 함수, 
					//구조체의 '값'에 접근하면 구조체가 클수록 접근시간이 길어짐
const int minsPerHr = 60;//분과 시간을 계산하기 위해 상수 설정
void showTime(Time);
int main_fn_struct()
{	//함수는 원본이 아닌 복사본을 대상으로 작업한다.
	Time day1 = { 5,45 };
	Time day2 = { 4,55 }; //배열로 멤버변수를 초기화
	
	Time total = sum(&day1, &day2); //sum함수가 포인터로 접근했기 때문에, day1,day2도 주소로 접근

	cout << "이틀간 소요 시간 : ";
	showTime(total);
		
	return 0;
}

Time sum(Time* t1, Time* t2)
{
	Time total;//구조체변수를 total로 선언
	//값에서 멤버로 접근할 때: .
	//주소에서 멤버로 접근할 때: ->
	total.mins = (t1->mins + t2->mins) % minsPerHr; //분은 나머지를 반환
	total.hours = t1->hours + t2->hours + (t1->mins + t2->mins) / minsPerHr;//시간은 몫을 반환
	
	return total;
}

void showTime(Time t1)
{
	cout << t1.hours << " 시간, " << t1.mins << " 분 입니다. " << endl;
}