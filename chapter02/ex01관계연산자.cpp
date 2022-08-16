#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    bool b;

    b= (1 == 2) ;
    cout << std::boolalpha; //불린을 true, false로 출력 
    cout << b << endl; // false

    //  boolalpha란 boolalpha 플래그라고 해서 
    //true or false, 즉 둘 중 하나를 선정하는 지정자를 말합니다.


    cout << "-ex02-" << endl; 
    //ex02_rel.cpp
    bool b2;
    int x = 3;
    int y = 3;
    cout << std::boolalpha;

    b2= (x == 3) && (y == 3);
    cout << b2 << endl;

    y = 2;
    b2= (x == 3) && (y == 3);
    cout << b2 << endl;

    b2= (x == 3) || (y == 3);
    cout << b2 << endl;

    x = 2;
    b2= (x == 3) || (y == 3);
    cout << b2 << endl;

    b2 = !(x == 3);
    cout << b2 << endl;

    return 0;
}
