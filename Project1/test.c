#include <stdio.h>
//재귀함수는 함수명이 동일해야함 & limited condition을 설정해줘야 무한loop에 빠지지않음
void myRecur(int n)
{
	printf("counting...%d\n", n);//#code1
	 if(n>0) myRecur(n - 1); //스택을 계속 쌓음
	printf("%d번째 재귀함수\n", n);//#code2
}


int main()
{
	myRecur(4);



	return 0;
}