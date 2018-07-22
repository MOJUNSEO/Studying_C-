#include <iostream>

/* 구조체의 유용성 !
 * 관련있는데이터를 하나의 자료형으로.
 * 구조체 내에 함수작성 -> 효율좋음
 * */


/*
 * 간단한 입출금 프로그램 작성
 * */

using namespace std;
 struct Person
 {
     char userId[20];
     char userAccount[20];
     char userName[20];
     int balance;
     int password;

     void Deposit(int value)
     {
        balance += value;
         cout << value << "원 입금되었습니다." << endl;
         cout << "잔여 금액 : " << balance << endl;
     }

     void Withdraw(int value)
     {
         balance -= value;
         cout << value << "원 출금되었습니다." << endl;
         cout << "잔여 금액 : " << balance << endl;
     }
 };


//&p를 써서 참조하는이유 -> 안전성 ? 안정성 ?
void minusBalance(Person &p, int value)
{
    p.balance = p.balance - value;
    cout << "잔여 금액 : " << p.balance << endl;
    cout << value << "원 출금되었습니다." << endl;
}

void plusBalance(Person &p, int value)
{
    p.balance = p.balance + value;
    cout << value << "원 입금되었습니다." << endl;
    cout << "잔여 금액 : " << p.balance << endl;
}


int main() {
    Person p = {"mjs","110-33-1234","쎗쿠",10000,1234};

    cout << "ID : " << p.userId << endl;
    cout << "ACCOUNT : " << p.userAccount << endl;
    cout << "NAME : " << p.userName << endl;
    cout << "BALANCE : " << p.balance << endl;
    cout << "PWD : " << p.password << endl;

    minusBalance(p,3000);
    plusBalance(p,50000);

    p.Deposit(1234);
    p.Withdraw(5555);
    return 0;
}