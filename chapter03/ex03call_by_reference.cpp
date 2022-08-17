#include <iostream>
using namespace std;
/*함수 인자 전달 방법-call by reference*/

void swap(int& x, int &y){  //매개변수에  &을 붙여줌으로써 call by reference방식.
    int t;
    t=x;
    x=y;
    y=t;
}

int main(int argc, char const *argv[]){
    int a= 100, b = 200;

    printf("a=%d, b=%d\n", a, b);
    swap(a, b); //초기화 될 때 딱 1번 고정된 값으로 변경하는 것. (값자체를 계속 조작하진않고 결과적으로  값이 가리키는 원본을 조작되는것.)
    printf("a=%d, b=%d\n", a, b);//call by reference에 의해 원본 값 변경!
    return 0;
}

// 자바 레퍼런스타입  : 어레이리스트 등
//레퍼런스의 실체는 메모리주소. 실제 메모리 주소는 알수 없다. 
//참조하는 실제 데이터를 핸들링하는것이 레퍼런스타입


//c++에서 자료형뒤에&붙이면 레퍼런스타입
//call by reference : 값전달x. 주소가 전달된다.

//즉, 함수를 호출할 때 원본을 조작하려면 call by reference로,
//원본을 유지하려면 call by value로 코드 작성.

//퀴즈. int data[100000] ->4M(4메가 데이터)를 sum()해줄때
//call by value가 좋을까? call  by reference가 좋을까?
// -> call by reference : 시간, 공간측면에서 더 적절.
// call by value는 값을 복사하는 방식이기에 복사시간이 걸리고 
// 메모리에 공간차지한다. 그래서 call by reference가 더 효율적이다.

//call by address(pointer)와 call by reference 둘 다 주소를 전달.
//call by reference는 호출하면서 값을 넣어주면서 조작하는 방식. 그 주소자체를 조작할 수 없음.
//pointer는 양쪽을 조작 가능. 매우 유연함. 그러나 잘못하면 프로그램이 죽음.
//동적할당 new로 그 주소자체를 조작한다.