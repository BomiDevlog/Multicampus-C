#include <iostream>
using namespace std;
/*멤버 초기화 리스트 : 생성자에서만 사용*/

class Time{ 
public:
    int hour;
    int minute;

    //생성자
    Time(); 
    Time(int h, int m); 

    //함수
    void print(); 
};


Time::Time(){ 
    hour = 0;
    minute = 0;
}

Time::Time(int hour, int minute): hour(hour), minute(minute){ 
    // hour(hour), minute(minute) 에서 앞의것은 멤버변수 매개변수는 지역변수이다.
    //멤버변수 초기화 리스트
}

void Time::print() { 
        cout << hour << " : " << minute << endl;
}

int main(int argc, char const *argv[]){
    Time a;
    Time b(10,25);
    
    a.print();
    b.print();
    
    return 0;
}

