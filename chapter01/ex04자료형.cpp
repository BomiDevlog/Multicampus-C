#include <iostream>
#include <string>

/*boolean
자바 -형변환 
자바스크립트 : 0, false, undefined, null, "" 5가지 경우에 false
c++ : 0이면 false, 0이 아니면 true
*/
using namespace std;

int main(int argc, char const *argv[]){
    bool b;
    b = true; // true라서 1 출력.

    bool v;
    v = 0; // false라서 0출력

    bool v2;
    v2 = ""; // true

    bool v3;
    v3 = false; // false라서 0출력
    //v3 = null; // 에러
    //v3 = undefined; //에러

    cout << b << endl; 
    cout << v << endl;
    cout << v2 << endl;
    cout << v3 << endl;

// C++의 boolean타입은 0, false일 때 false.

    //char
    char ch;
    ch = 'a';
    cout << ch << endl;

    //string 
    string s1="Good";
    string s2= "Morning";
    string s3= s1 + " " + s2 + "!";
    cout << s3 << endl;

    string s4="Good";
    string s5= "Bad";
    bool b2 = (s4 == s5);
    cout << b2 << endl; //같지 않으니 false => 0

    //const 상수 : 값 변경불가. 자바의 final
    const double TAX_RATE = 0.25; // 기호 상수 선언
    int income = 1000;
    // TAX_RATE = 0.3; // 에러. 값 변경 불가
    income = income - TAX_RATE * income; //값 변경가능
    
    cout << income << endl;

    return 0;
}

