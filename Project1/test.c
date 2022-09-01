#include <stdio.h>

int main_test()
{
	typedef struct Gameinfo
	{
		char name[20];
		int year;
		int price;
		char company[20];
	}Info;

	Info A = { "나도코딩",2017,50,"나도회사" };

	printf("%s\n", A.name);
	printf("%d\n", A.year);
	printf("%d\n", A.price);
	printf("%s\n", A.company);


	



	return 0;
}