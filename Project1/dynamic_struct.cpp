#include <iostream>

using namespace std;

struct MyStruct//구조체는 함수와 마찬가지로 전처리기에서 미리 정의해야함.
{              //main 위에서 정의하면 메모리를 잡아먹지 않음
    char name[20];
    int age;
};

int main() {

    MyStruct* temp = new MyStruct;//struct형의 메모리를 찾아줘!
                                  //메모리 대출할께요
    cout << "당신의 이름을 입력하십시오.\n";
    cin >> temp->name;//동적구조체는 '->' 로 사용

    cout << "당신의 나이를 입력하십시오.\n";
    cin >> (*temp).age; //연산자 순위:멤버 연산자> 역참조 연산자

    cout << "안녕하세요! " << temp->name << "씨!\n";
    cout << "당신은 " << temp->age << "살 이군요!\n";

    delete temp;
    return 0;
}