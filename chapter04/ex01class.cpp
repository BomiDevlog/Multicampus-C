#include <iostream>
#include<string>
using namespace std;
/*클래스 - 객체 생성(정적생성)*/

class Circle{
public:
    int radius;
    string color;

    double calcArea(){
        return 3.14*radius*radius; 
    }
};

int main(int argc, char const *argv[]){
    Circle obj; //객체생성
    obj.radius = 100;
    obj.color = "blue";

    cout << "the area of a circle: " << obj.calcArea() << endl;

    cout << endl<< "-----------------" << endl;

    /*클래스 - 여러개의 객체생성*/
    Circle pizza; //객체 생성

    pizza.radius =100;
    pizza.color = "yellow";
    cout << "the area of pizza 01 : " << pizza.calcArea() << endl;

    pizza.radius =200;
    pizza.color = "white";
    cout << "the area of pizza 02 : " << pizza.calcArea() << endl;
    
    return 0;

}

/*클래스 정의하기 

class 클래스명{         // 클래스 선언
public:                 // 접근지정자 -> 다른 접근지정자가 나타날때까지 해당범위.
    int radius;          //멤버변수
    double clacArea(){  //멤버함수
        return 3.14*radius*radius; 
    }
}; 

클래스명은 파스칼표기법으로 첫글자대문자.
중괄호끝에 세미콜론찍어주어야함!

*c++에서 접근지정자를 생략하면 private(같은 클래스 내에서 접근가능)
cf) 자바에서 접근지정자를 생략하면 default(같은 패키지 내에서 접근가능)

*/

/*객체생성

자바는 동적생성, 한가지방법이 있다
Cicle c; 참조변수생성, 인스턴스x
Circle c=new Circle(); new로 동적생성(내가 필요할때 만듬). 인스턴스. heap이라는 메모리공간에 생성됨
해당변수가 인스턴스의 주소를 참조한다.

c++
정적생성: Circle c;
        변수선언하면 인스턴스가 만들어진다. 그래서 바로 사용할 수 있다.
        인스턴스가 만들어지는 시점이 결정되어있어서 개발자가 조정할수없어서 정적이라고 표현
        정적생성은 stack에 만들어진다 그래서 그지역변수가 사라질때 같이 사라진다.
동적생성: Circle*c; c=new Circle(); 참조변수가 아니라 pointer변수로 받아주어야함
        생성시점이 개발자가 원하는 시점에 만들수 있어서 동적이라고 표현.
        동적생성은 heap에 만들어진다


즉, 자바에서 
Circle c;
c.area(); 
인스턴스가 없어서 죽는다.
c=new Circle();로 인스턴스를 만들어주어야한다. 동적생성.

c++에서
Circle c; 인스턴스가 생성되어
c.area();  가능함
*/

/*
인스턴스 생성은 new를 통해 클래스에 정의된 내용대로 메모리에 실제 공간을 할당하는 작업을 이야기 합니다.
멤버변수에 변수를 선언했다면 인스턴스 생성시에 실제 메모리에 선언된 변수가 만들어지는 것이지요.

인스턴스가 생성될때 생성자 호출
new Circle();
생성자 역할: 멤버변수 초기화

생성자는 객체가 생성된후에 멤버변수의 초기화나 객체직후 필요한 작업을 수행하는 역활을 합니다.
그래서 객체가 생성된후 해당 생성자를 호출하게 됩니다.

해당클래스가 인스턴스화될때 반드시 생성자가 호출된다. 
그래서 모든 클래스는 생성자를 가진다.(디폴트생성자가 자동생성된다)
이점은 클래스개념이 있는 모든 객체지향언어의 공통점
: 모든 클래스는 생성자를 가지며, 인스턴스가 생성될때 생성자가 호출된다. 
자바와 c++도 그러함.

*/
/*
즉 c++에서
Circle c;
객체 정적생성 -> 인스턴스 생성 -> 생성자 호출
*/