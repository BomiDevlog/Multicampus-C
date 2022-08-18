#include <iostream>
using namespace std;
/*생성자*/

class Time{
public:
    int hour;
    int minute;

    Time(int h, int m){ // 생성자
        hour = h;
        minute = m;
    }

    void print() { // 함수
        cout << hour << " : " << minute << endl;
    }
};

int main(int argc, char const *argv[]){
    //Time a; //디폴트 생성자 호출 -> 에러
    Time b(10,25);
    Time c{10,25};
    Time d = {10, 25};

    b.print();
    c.print();
    d.print();

    return 0;
}




/*

생성자: 
객체가 인스턴스화될 때 자동으로 호출되는 멤버함수
리턴타입없고 클래스명동일
멤버변수초기화
생성자정의하지않으면 컴파일러에 의해 디폴트 생성자가 자동추가
(생성자가 정의되면 디폴트생성자는 사라지고, 정의된 생성자만 존재.)


* 인스턴스화 될때
java: new 키워드로 동적생성될때
c++: 정적생성 - 변수생성시 자동으로
    동적생성 - new 키워드로 동적생성될때

*/

/*
Time a; 변수선언
자바에서는 가능
C++은 자동으로 인스턴스화되고 생성자가 호출되기에 a();안됨
디폴트생성자가 없기때문에/

*/