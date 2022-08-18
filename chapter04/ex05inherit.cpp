#include <iostream>
using namespace std;
/*상속*/

class Shape{
protected:
    int x,y;
public:
    void draw() {}
    void move() {}
};

class Reactangle: public Shape { // 상속
protected:
    int width;
    int height;
public:
    int clacArea(){
        return width*height;
    }
};


/*

객체지향 - 상속 다형성 캡슐화은닉

자바상속 extends
c++ : public

자바에서 접근지정자로
멤버변수: 상속안하면 private 상속하면 protected -> 데이터 은닉
메서드: 외부객체가 쓸수있도록 오픈해서 public

(private멤버는 상속안됨 완전히 외부접근 막으니까. 상속은되는데 외부접근 막는게 protected.)
번거롭다면 멤버변수는 protected 메서드는 public으로 유지해도 됨.
*/