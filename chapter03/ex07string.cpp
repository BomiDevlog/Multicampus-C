#include <iostream>
#include <string>
using namespace std;
/*string 클래스*/

int main(int argc, char const *argv[]){
    string s1, addr;

    cout << "Enter your name. : " ;
    cin >> s1;
    cin.ignore(); //엔터키 제거

/* 다음 입력을 받기전 버퍼를 비워주는 것이다.

버퍼란 키보드로 문자를 입력 시 
입력 문자를 전송하기 전에(개행 문자 입력 전) 임시 저장하는 공간이다.

버퍼를 비우기 위해서는 cin.ignore()를 사용하면 된다.*/

    cout << "Enter your address. : ";
    getline(cin, addr);

    /*
    getline(cin, a); 로 데이터를 입력 받습니다.
두 번째 인자로 a를 입력했기 때문에 cin으로 데이터를 입력하면 a에 저장됨을 알 수 있습니다.
그리고 cout 함수로 a를 출력합니다.

프로그램 실행 결과 입력한 문자열이 출력되는 것을 확인할 수 있습니다.
이렇게 getline 함수는 키보드로 데이터를 입력받을 수 있도록 하는 함수입니다.
    */

    cout << s1 << ", hello! in " << addr <<endl;

    return 0;
}

