#include <iostream>
using namespace std;
/*생성자 중복정의*/

class Time{ // 클래스 내에 함수원형만 남긴 헤더 파일(hpp, h)
public:
    int hour;
    int minute;

    //생성자
    Time(); //디폴트 생성자
    Time(int h, int m);  //호출할때는 매개변수 상관없음.

    //함수
    void print(); 
};

//=> 정의는 cpp파일에 정의.

Time::Time(){ //디폴트 생성자
    hour = 0;
    minute = 0;
}

Time::Time(int hour, int minute){ // 정의할때는 매개변수있어야함
    this->hour = hour;
    this->minute = minute;
}
//자바: 지역변수가 멤버변수보다 우선순위가 높아서 this로 구분
//C++: this는 자기자신을 가리키는 포인터변수이다. 참조변수가 아님. 그래서 화살표로 멤버변수에 접근.
//즉, 변수이름에 충돌했을때 멤버변수를 지칭했을때 this->를 사용해 구분한다
void Time::print() { // 함수를 클래스 밖에서 정의
        cout << hour << " : " << minute << endl;
}

int main(int argc, char const *argv[]){
    Time a; //디폴트 생성자 호출 가능해짐
    Time b(10,25);
  
    a.print();
    b.print();
   

    return 0;
}


//자바에서 오버라이딩은 상속받아 재정의, 오버로딩은 생성자 다중정의