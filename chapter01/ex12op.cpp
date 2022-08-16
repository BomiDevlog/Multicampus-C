#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]){
    int x = 100;
    int y = 200;

    int result = x + y;
    cout << "x + y : " << result << endl;
    cout << "x - y : " << x - y << endl;
    cout << "x / y : " << x / y << endl; // 몫. 단위가 int이니 0.
    cout << "x % 3 : " << x % 3 << endl; // 나머지

    return 0;
}

//사칙연산. operator연산자

//정수/정수 =정수
//ex.2/3=0

