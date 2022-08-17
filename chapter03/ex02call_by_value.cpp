#include <iostream>
using namespace std;
/*함수 인자 전달방법 - call by value*/

void swap(int x, int y){//매개변수에  &없으니 call by value방식.
    int t;
    t=x;
    x=y;
    y=t;
}
//지역변수의 생명주기: 지역변수는 선언되었을때 생성되고, 포함된 블럭이 끝날때 사라진다

int main(int argc, char const *argv[]){
    int a= 100, b = 200; // call by value : 원본 값은 변하지않음

    printf("a=%d, b=%d\n", a, b);
    swap(a, b); //매개변수는 반드시 호출문에서 초기화됨 => 전달된값으로 swap의 매개변수(x,y)가 초기화
    printf("a=%d, b=%d\n", a, b);
    return 0;
}
// main()에 지역변수 4개 : a,b,argc, argv (매개변수도 포함)


//----------------------
//지역변수는 stack에서 관리
//함수가 실행되면(함수호출) stack에 함수의 영역이 잡힌다. 
//stack 가장 아래에 main()함수가 자리잡고, 그곳에 지역변수int a, b가 구성됨.
// max()호출하면 stack frame에 max의 지역변수(int x,y)가 할당된다. 매개변수도 지역변수.

//*stack 메서드를 수행하는 공간. 위에 쌓인다. (중간에 못넣음)
//-LIFO(Last In First Out) 나중에 들어간게 가장먼저 나온데

//자바에서 call by value, call by reference를 개발자가  선택하지않음 
//데이터타입에 따라 지정 -> primitive타입(int, float... )으로 호출하면  call by value
//----------------------

//printf의 f는 format의 의미.  (자바스크립트의 ` %{} `와 비슷한 기능)
//%d(10진수 대체문자)이 템플릿(골격)이 되어 순서대로 값 대입
//%x 16진수 %f 실수 %s문자열  // 데이터타입에 맞아야함
//\n줄바꿈 