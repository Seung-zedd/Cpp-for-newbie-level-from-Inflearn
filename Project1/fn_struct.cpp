#include <iostream>

using namespace std;
//����ü�� ���ϴ� �Լ� + ���� ���� ����ϴ� �Լ�
struct Time
{
	int hours;
	int mins;
};
Time sum(Time*, Time*);//����ü�� ���ϴ� �Լ�, 
					//����ü�� '��'�� �����ϸ� ����ü�� Ŭ���� ���ٽð��� �����
const int minsPerHr = 60;//�а� �ð��� ����ϱ� ���� ��� ����
void showTime(Time);
int main_fn_struct()
{	//�Լ��� ������ �ƴ� ���纻�� ������� �۾��Ѵ�.
	Time day1 = { 5,45 };
	Time day2 = { 4,55 }; //�迭�� ��������� �ʱ�ȭ
	
	Time total = sum(&day1, &day2); //sum�Լ��� �����ͷ� �����߱� ������, day1,day2�� �ּҷ� ����

	cout << "��Ʋ�� �ҿ� �ð� : ";
	showTime(total);
		
	return 0;
}

Time sum(Time* t1, Time* t2)
{
	Time total;//����ü������ total�� ����
	//������ ����� ������ ��: .
	//�ּҿ��� ����� ������ ��: ->
	total.mins = (t1->mins + t2->mins) % minsPerHr; //���� �������� ��ȯ
	total.hours = t1->hours + t2->hours + (t1->mins + t2->mins) / minsPerHr;//�ð��� ���� ��ȯ
	
	return total;
}

void showTime(Time t1)
{
	cout << t1.hours << " �ð�, " << t1.mins << " �� �Դϴ�. " << endl;
}