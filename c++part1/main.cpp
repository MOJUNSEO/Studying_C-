#include <iostream>
//#include <iostream.h> -- 구버젼 헤더로써 cout << 123 << endl 이 가능해짐

int baseinputoutput();

/* 디폴트 매개변수는 맨위에서만  */
int Dfunc(int a = 0);

int Defaultparameter();


/* 인라인 함수 -> 매크로를 c++화 시킨 것 */
inline int square(int x)
{
    /* 실행 속도 향상 / 구현의 용이 , 컴파일러에서 처리, 콜백 아님! 컴파일러에게 최적화! */
    return x*x;
}

int callinline();


/* 이름 공간 사용하기 */
namespace A_COM
{
    void Nfunction(void)
    {
        std::cout << "A에 있는 함수 호출" << "using 사용!" << std::endl;
        return;
    }
}

/* using의 사용! namespace A_COM 의 모든 변수, 함수를 A_COM::xxxx 없이 사용하겠다! 읿반 호출로 사용하겠다. */
using namespace A_COM;
//만약 변수만 따로 저장하고 싶으면 using namespace A_COM::Nfunction(void): 이렇게 하면 됨.

/* using을 응용하여 std:: 를 생략 할 수 있음  */
//using namespace std;

namespace B_COM
{
    void Nfunction(void)
    {
        std::cout << "B에 있는 함수 호출" << std::endl;
        return;
    }
}

/* 이상하게도 namespace 관련해서는 아래에다가 선언하면 컴하일 에러 걸렸음.  */

void callnamespace(){
    Nfunction();
    B_COM::Nfunction();
}

/***************** **    M  A  I  N    ************************/
int main() {
    //baseinputoutput();
    //Defaultparameter();
    //callinline();
    callnamespace();

    return 0;
}
/***************** **    M  A  I  N    ************************/


int baseinputoutput()
{
    /* 기본 출력  */
    std::cout << "Hello, World!" << std::endl;
    std::cout << 123 <<  std::endl;

    /* 기본 입력 */
    int val1;
    int val2;
    std::cout << "숫자 1 입력 : " << std::endl;
    std::cin >> val1;
    std::cout << "숫자 2 입력 : " << std::endl;
    std::cin >> val2;
    std::cout << val1+val2 << std::endl;

    return 0;
}

int Dfunc(int a)
{
    return a+1;
}

int Defaultparameter()
{
    std::cout << Dfunc() << std::endl;
    std::cout << Dfunc(10)<< std::endl;
    return 0;
}

int callinline()
{
    std::cout << square(5) << std::endl;
    return 0;
}
