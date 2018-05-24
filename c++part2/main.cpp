#include <iostream>

using namespace std;

// https://www.youtube.com/watch?v=TjIfcm0YA_M&list=PLJRimEWvctNAfE5JrkwswQv6Yy4abqDl2&index=6

void exampleConst();
void exampleReference();

int main() {

    exampleReference();
    return 0;
}

void exampleConst()
{
    /* const는 변수를 상수화 시키는 것, 상수화란 간단히 말해 값을 변경시킬수 없게   */
    /* 정수형 변수 n이 가지고 있는 데이터 10의 상수화. */
    /* const 바로 뒤에 오는 데이터에 대한 제한임.  */


    //const int n = 10;


    // *n2에 저장된 메모리주소가 가리키는 값인 데이터 20의 상수화. 즉 메모리주소값이 상수화되는 것이 아님.
    // n이라는 '포인터 변수'로 접근하여 변경할떄 허용을 안하는 것임.
    //const int *n2 = 20;


    // 포인터변수 n3 이 가지고 있는 메모리주소 변경이 불가하게 함.
    //int* const n3 = 30;

    // int* 앞에 const가 붙었으므로 포인터 변수가 가리키는 메모리주소에 대한 변경 불가
    // 변수 n 앞에 const가 붙었으므로 포인터 변수가 가리키는 메모리주소에 해당하는 데이터값의 변경 불가
    //cons int* const n = 40;
}

void exampleReference()
{
    //레퍼런스 '&'이란 변수에 별명을 붙여주는 것과 같다.
    //int형 변수를 참조할수 있는 레퍼런스를 선언한다. 그래서 val은 int형 타입을 취하게 된다.
    int val  = 10;
    int& ref = val;

    val++;
    cout << "val : " << val << endl;
    cout << "ref : " << ref << endl;

    ref++;
    cout << "val : " << val << endl;
    cout << "ref : " << ref << endl;

    //결과 값을 보면알겠지만, 주소값이 아닌 본래의 val값을 참조한다. val을 '참조'하므로 val 값이 출력된다.

    cout << "val address : " << &val << endl;
    cout << "ref address : " << &ref << endl;

    //출력해보면 주소값이 같다.
    // 정리하자면 '변수란' 메모리 공간에 이름을 붙여주는 것.
    // '레퍼런스'는 이름을 하나 더 ! 붙여주는 것이다.
    // 레퍼런스를 사용하기 위해서는 대상은 항상 이름이 존재하며(선언) 초기화 되어야한다. 

}