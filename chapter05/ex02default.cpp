#include <iostream>
using namespace std;
/*생성자*/

class Time{ // 클래스 내에 함수원형만 남겼다. => 헤더 파일(hpp, h)
public:
    int hour;
    int minute;

    Time(int h, int m); //생성자

    void print(); //함수
};


Time::Time(int h=0, int m=0){ // 디폴트 인수를 사용
    hour = h;
    minute = m;
}

void Time::print() { // 함수를 클래스 밖에서 정의
        cout << hour << " : " << minute << endl;
}

int main(int argc, char const *argv[]){
    Time a; //디폴트 생성자 호출 가능!
    Time b(10,25);
    
    a.print();
    b.print();
    

    return 0;
}
