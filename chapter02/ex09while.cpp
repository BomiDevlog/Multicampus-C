#include <iostream>
using namespace std;


int main(int argc, char const *argv[]){
    int n = 10;

    while (n>0){
        cout << n << " ";
        n--;
    }
    
    cout << "fire!" << endl;
    return 0;
}

// 루프를 돌아야하는 횟수가 결정되어 있는경우 for문을 쓰고
// 루프를 돌아야하는 횟수가 결정되어 있지 않은 경우(입력받는 경우)에 주로 while문을 쓴다

// return 0;
//현재 있는 함수의 실행을 종료하고 함수에서 빠져나가 
//이 함수를 호출했던 곳으로 돌아가고 OS에 0이라는 값을 반환한다.
