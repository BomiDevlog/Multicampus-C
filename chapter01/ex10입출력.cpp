#include <iostream>
#include <string>
using namespace std;

//c는 output이 아닌 터미널에서 사용해야한다. 
//(output은 출력만 나와서 input기능인 cin이 적용되지 않기때문)
//설정에서 runner terminal검색해서 터미널창에 출력나오도록 설정

//terminal에서 출력할 때 한글이 깨진다. -> 이유: 문자set(charset)
//맥에서는 일어나지않고 windows에서만 일어나는 현상이다.
//인코딩 선택 : UTF-8 
//문자 인코딩(문자코드 방식)은 아스키코드 유니코드(전세계표준) 등이 있다

//문자코드 -국내표준 (ISO-9660) :인터넷 보급되기 이전에 국내에서 자체적으로 만들어짐
//         -국제 표준 (유니코드) : 인터넷이 보급되면서 보편화됨
//windows는 인터넷 존재 전부터 등장해서 국내표준으로 적용하고
//리눅스, 맥 등은 인터넷 존재 후에 등장해 한글을 국제표준인 유니코드(UTF-8 )로 적용.

//즉 UTF-8이 아닌 Korean(EUC-KR)로 설정

int main(int argc, char const *argv[]){
    //cout : 출력.
    int k = 100;
    cout << "변수 k의 값은 ";
    cout << k;
    cout << "입니다.";
    cout << endl;
    cout << "변수 k의 값은" << k << "입니다." << endl;

    //cin : 입력. 
    int i;
    cout << "정수를 입력하세요: ";
    cin >> i;

    double f;
    cin >> f;

    cout << i << " " << f << endl;

    //ex11
    string name;
    cout << "이름을 입력하세요: ";
    cin >> name;

    cout << name << "을 환영합니다." << endl;
    return 0;
}
