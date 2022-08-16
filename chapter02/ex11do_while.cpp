#include <iostream>
using namespace std;


int main(int argc, char const *argv[]){
    string str;

    do{
        cout << "Enter a string: ";
        getline(cin, str) ;

        cout << "user input: " << str << endl;
    } while (str != "termination");
    
    return 0;
}



//while문은 조건식이 거짓이면 실행안함
//do while은 최소 1번은 실행. //잘 안쓰이는 편^^ㅎㅎ

//터미널에서 종료할 때 컨트롤 + c