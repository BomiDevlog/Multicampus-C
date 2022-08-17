#include <iostream>
using namespace std;

int max(int x, int y){
    if(x>y)
        return x;
    else 
        return y;
}

int main(int argc, char const *argv[]){
    int n;
    n = max(2, 3);
    cout << "Function Call Result : " << n << endl;
    return 0;
}


//함수의 정의. 
//중괄호로 범위를 지정하고 문장을 작성.
// 반환할때는 데이터타입이 일치해야함

//함수 호출: 호출은 함수이름부르고 매개변수에 값을 주면 된다.
//자바는 메서드 배치 순서에 영향없이 호출
// 자바스크립트도 함수 배치순서에 영향없이 호출 
//단. 호이스팅. onload 등 위치의 고려사항있음
// c/c++? 파이썬?