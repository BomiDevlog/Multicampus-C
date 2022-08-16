#include <iostream>
#include <string>
using namespace std;

// auto : 컴파일러가 문맥을 보고 자동으로 데이터타입을 결정
// 한번 정해지면 자료형이 고정됨

auto add (int x, int y){
    return x+y; // auto로  int타입 결정
}

//컴파일러가 타입추론
int main(int argc, char const *argv[]){

    auto d=1.0; //값을 보고 double 타입이 됨
    auto sum=add(5,10); // 위에서 int로 이미 타입결정되어서 계산해서 int값.
    //auto를 남발하면 가독성이 떨어진다 (권장x)
    //auto는 주로 for문에서 사용

    cout << d << " " <<sum << endl;
    return 0;
}