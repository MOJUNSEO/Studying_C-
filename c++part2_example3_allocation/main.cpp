#include <iostream>

using namespace std;
#define DEBUG 0;

int main() {
    int size;
    cout << "할당하고자하는 배열 크기 : " ;
    cin >> size;

    int* arr = new int[size];

#if DEBUG == 1
    cout << "디버그 모드입니다" << endl;
    if(arr == NULL)
    {
        cout <<"메모리 할당 실패" << endl;
        return -1;
    }
#endif
    for (int i = 0; i < size; ++i) {
        arr[i] = i+10;
    }
    for (int j = 0; j < size; ++j) {
        cout << arr[j] << " ";
    }
    cout << "" << endl;

    delete []arr;
}