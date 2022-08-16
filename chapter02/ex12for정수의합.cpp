#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){

    int sum = 0;
    for (int i=0; i<=10; i++){
        sum += i ;
    }

    cout << "Sum of integers from 1 to 10 = " << sum << endl;
    //integer : 정수 
    return 0;

    //cout << i; //지역변수라서 출력x
    //지역변수(local variable)란 중괄호 내에서 선언된 변수. 
    //선언된 시점에서 해당 블럭(중괄호)이 끝날 때 생명이 끝남

    //메인함수 안에서 선언된 sum 은 함수 {}에서 사용가능한것. 
    //=> 전역변수 (global variable):함수 밖에서 선언되어 어느 함수에서도 접근 가능

    //자바스크립트에서도 같은 케이스. 전역변수.
    //전역변수는 Bug의 주된 요인. 가급적 사용하지말 것을 권장.
    //그래서 대규모 프로젝트에서는 전역변수를 거의 사용하지않는 편
    //예외적으로. 아두이노에서는 전역변수를 많이 사용한다. 

    
}