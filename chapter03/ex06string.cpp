#include <iostream>
#include <string>
using namespace std;
/*string 클래스*/

int main(int argc, char const *argv[]){
    string s1= "Slow", s2= "steady";
    string s3 = "the race.";
    string s4;

    s4 = s1 + " and " + s2 + " wins " + s3;
    cout << s4 << endl;
    return 0;
}

/*
java/js : String - 불변객체(원본 수정 안됨 immutable객체)
String s="hello";
s=s.upper() 변경해서 재배정. 값을 바꾸려면 대입문을 써서 재할당을 해야함.

(+)원본을 변경시키는가 아닌가는 매우 중요한 지점이다.

c++ : string - 가변객체(원본 수정 가능)
배열처럼 사용.
empty 비움
insert 중간 삽입. 
remove 삭제 
find 문자열 찾기->글자의 인덱스를 반환, 없으면 -1

*/