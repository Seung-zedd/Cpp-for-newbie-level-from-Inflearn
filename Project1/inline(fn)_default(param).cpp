#include <iostream>

using namespace std;
//�ζ��� �Լ��� ����Ͽ� ����ӵ��� �����ش�(���ÿ� �޸� ������ص� �ǹǷ�)
inline float square(float x) { return x * x; } //: �ζ����Լ��� �����Ϸ��� ������ �ϱ⶧���� ���� ���ɼ� �پ��
											//�ζ����Լ��� �ڷ����� ����ϴϱ� return�� ������� 
//#define square(x) x*x 
//��ũ�δ� ��ó���⿡�� �Լ��� ȣ���ϱ� ������ ������� ���ɼ�����, �������� ����, ������ϱ� �����
int main_inline()
{
	float a = 5.;
	float(b) = square(a+1);//expected return:36

	cout << b << endl;



	return 0;
}