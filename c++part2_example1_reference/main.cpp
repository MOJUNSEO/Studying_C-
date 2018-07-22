#include <iostream>

using namespace std;

struct _PerSon{
    int age;
    char name[20];
    char personalID[20];

};

typedef struct _PerSon Person;

void Showdata(const Person & p);

int main() {
    Person man;
    cout << "이름 입력 : ";
    cin >> man.name;
    cout << "주민번호 입력 : ";
    cin >> man.personalID;
    cout << "나이 입력 : ";
    cin >> man.age;

    Showdata(man);
}

void Showdata(const Person & p)
{
    cout << "************ 개인 정보 출력 ************" << endl;
    cout << " 이름  : " << p.name << endl;
    cout << " 주민번호 : " << p.personalID << endl;
    p.name = 'fdff';
    cout << " 나이 : " << p.age << endl;

}