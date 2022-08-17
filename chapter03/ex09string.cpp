#include <iostream>
#include <string>
using namespace std;
/*string 클래스*/

int main(int argc, char const *argv[]){
    string s = "When in Rome, do as the Romans.";

    for(auto& ch: s){
        cout << ch << ' ';
    }
    //반복문을 이용해 모든 글자에 공백 형성

    return 0;
}

