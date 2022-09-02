#include <iostream>
#include <cstring> //strlen() 함수를 사용하기 위해서
using namespace std;

int main_string()
{
	const int Size = 15;
	char name1[Size];
	char name2[Size] = "C++programming";

	cout << "안녕하세요! 저는 " << name2;
	cout << "입니다! 성함이 어떻게 되시나요?\n";
	//cin >> name1;
	cin.getline(name1, Size); //white space(enter,space,tab 포함한 공백)까지 출력허용
	cout << "음, " << name1 << "씨, 당신의 이름은 ";
	cout << strlen(name1) << " 자입니다만\n";
	cout << sizeof(name1) << " 바이트 크기의 배열에 저장되었습니다.\n";
	cout << "이름이" << name1[0] << " 자로 시작하는군요.\n";
	name2[3] = '\0'; //null 문자를 설정했으므로
	cout << "제 이름의 처음 세 문자는 다음과 같습니다: ";
	cout << name2 << endl; //C++까지만 출력

	//배열을 또다른 배열에 대입하는 것은 불가능하지만, string은 가능
	//string을 C스타일의 배열로 초기화 가능

	char char1[20];
	char char2[20] = "jaguar";
	string str1;
	string str2 = "panda";

	//char1 = char2;
	str1 = str2;
	cout << str1 << endl;

	return 0;
}