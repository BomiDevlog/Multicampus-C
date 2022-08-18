#include <iostream>
#include<string>
using namespace std;
/*클래스 - 헤더파일 개념*/

class Car{
public:
    int speed;
    int gear;
    string color;

    void speedUp(){
        speed += 10;
    }
    void speedDown(){
        speed -= 10;
    }
};

int main(int argc, char const *argv[]){
    Car myCar;//객체생성

    myCar.speed = 100;
    myCar.gear = 3;
    myCar.color = "red";

    myCar.speedUp();
    myCar.speedDown();

    return 0;
}

/*
c++은 메서드정의를 다른 파일에 할 수 있다

클래스 원형과 구현 정의 분리 => 메서드 정의

헤더파일에 클래스원형. 
- 멤버변수 정의. 함수원형만 제시.

cpp파일에 멤버함수 정의
-헤더파일 include. 멤버함수 구형

hpp, h헤더파일에.
#pragma once 한번만 정의내린다
함수 원형만 구성함

생성자: 클래스명과 이름이같고, 리턴타입이없다.

cpp파일
메서드정의

 :: scope연산자. 어디에 소속되어있는지 위치를 나타냄
 Car::Car(){ // Car클래스의 생성자

 }
 Car(){ // 함수

 }

*/