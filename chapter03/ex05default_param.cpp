#include <iostream>
using namespace std;
/*중복 함수(overload)*/

void display(char c='*', int n=10){//매개변수에 값 대입문을 작성
    for(int i=0; i<n; i++){
        cout << c;
    }
    cout << endl;
}

int main(int argc, char const *argv[]){
    display();          //인자안주니 매개변수 그대로 출력
    display('#');       // #으로 n은 그대로10회로 출력
    display('#', 5);    //2개 모두 주면 적용해서 출력
    display(5);         //[x] 매개변수mapping은 위치기반이라서. char타입인데 숫자를 주니 잘못되었음.
    //오버로드처럼 보이지만 실제로는 함수가 1개. 자바만 이 기능이 없다.
    return 0;
}

//int xxx(int a, int b=10){}
//=> int a 핋수인자 int b=10 옵션

//int xxx(int a=10, int b){} [x]
//필수인자가 뒤로 갈 수 없다.