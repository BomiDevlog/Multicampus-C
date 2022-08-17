#include <iostream>
#include <string>
using namespace std;
/*string 클래스*/

int main(int argc, char const *argv[]){
    string s1, addr;

    cout << "Enter your name. : " ;
    cin >> s1;
    cin.ignore(); //엔터키 제거

    cout << "Enter your address. : ";
    getline(cin, addr);

    cout << s1 << ", hello! in " << addr <<endl;

    return 0;
}

