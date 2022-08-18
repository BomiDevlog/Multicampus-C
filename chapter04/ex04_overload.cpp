#include <iostream>
#include <string>
using namespace std;
/*멤버 함수 오버로드 : 다중정의 */
//자바에서 오버라이딩은 상속받아 재정의, 오버로딩은 생성자 다중정의

class PrintData{
public:
    void print(int i){ cout << i << endl; }
    void print(double f) { cout << f << endl; }
    void print(string s = "No Data!") { cout << s << endl; } // 디폴트로 정의해준 값이 출력됨
};

int main(int argc, char const *argv[]){
    PrintData prn;//객체생성

    prn.print(1);
    prn.print(3.14);
    prn.print("C++ is cool!");
    prn.print();

    return 0;
}