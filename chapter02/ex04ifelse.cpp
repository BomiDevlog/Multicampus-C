#include <iostream>
using namespace std;


int main(int argc, char const *argv[]){
    int x = 120;

// = 으로 대입연산자 쓰면 전혀 다른 결과!  
// 대입하여 boolean으로 0이 아니면 true값이 나온다
// 에러처리 안되기에 더더욱 주의하기! 

    if(x == 100){
        cout << "x is 100." << endl;
    }else {
        cout << "x is not 100." << endl;
    }

    return 0;
}