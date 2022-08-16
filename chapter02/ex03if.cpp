#include <iostream>
using namespace std;

//if 문
// 실행문이 1줄이면 중괄호 생략가능, 2줄 이상은 중괄호로 블럭잡아주어야함


int main(int argc, char const *argv[]){
    int x = 100;

    if(x == 100)
        cout << "x is 100." << endl;

    if(x ==100){
        cout << "Outputs a value of x." << endl;
        cout << "x is 100." << endl;
    }

    return 0;

}