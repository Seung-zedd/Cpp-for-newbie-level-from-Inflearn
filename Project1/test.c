#include <stdio.h>
//����Լ��� �Լ����� �����ؾ��� & limited condition�� ��������� ����loop�� ����������
void myRecur(int n)
{
	printf("counting...%d\n", n);//#code1
	 if(n>0) myRecur(n - 1); //������ ��� ����
	printf("%d��° ����Լ�\n", n);//#code2
}


int main()
{
	myRecur(4);



	return 0;
}