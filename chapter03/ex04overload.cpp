#include <iostream>
using namespace std;
/*중복 함수(overload)*/

int square (int i){
    cout << "square(int) CALL" << endl;
    return i*i;
}

double square (double i){
    cout << "square(double) CALL" << endl;
    return i*i;
}

int main(int argc, char const *argv[]){
    cout << square(10) << endl;
    cout << square(2.0) << endl;

    return 0;
}

/*중복 함수(overload)
- 함수의 이름은 동일하지만 함수의 인자가 다르면 다른 함수로 인식
- 리턴 타입은 상관없음
*/
//반환타입만 다름 => 같은 함수로 보고, 중복 적용했다고 에러남 
//int print(int);
//void print(int);