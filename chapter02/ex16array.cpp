#include <iostream>
using namespace std;
// 배열 생성 ->10번 입력하고나서 평균값 도출.

int main(int argc, char const *argv[]){

    const int STUDENTS = 10; //배열크기 => 상수로 배열크기를 고정

    int scores[STUDENTS]; //배열선언 => C는 선언만으로 배열 생성되니 바로 값 대입 가능.
    //선언하면 int10칸 배열이 메모리에 생성된다
    int sum = 0;
    int i, average;

    for(i=0; i<STUDENTS; i++){ //0~9까지 성적입력
        cout << "Enter your students' grades: ";
        cin >> scores[i];
    }
    for(i=0; i<STUDENTS; i++){
        sum += scores[i]; //복합대입연산자  sum = sum + scores;
    }

    average = sum / STUDENTS;
    cout << "average grade= " << average << endl; 
    
    return 0;
} 

/*배열
같은 타입 데이터를 순차적으로 메모리에 저장.
각각의  데이터(element)는 index로 독립적 사용 가능
대용량 데이터를 동일 이름으로 쉽게 저장, 처리 가능

ex. 50명의 국어성적
kor1, kor2 ,...., kor50 변수지정 -> 반복문 불가. 출력할 때 계속 50번을 노가다.
=>  int scores[50]; 데이터50개에 대한 변수명 1개(배열) -> 데이터구분을 index로.->반복문(for, while 등) 활용  
데이터타입 int로 같음. 변수명 scores. index 0~49 (50명의 데이터)
*/

//1.자바의 경우 선언했다고해서 배열이 만들어진게 아니다. 참조변수가 생성된것.
//int scores [10];
//int [10] scores;

//new키워드를 통해서 공간을 만들고 시작위치를 참조하는게 자바의 메커니즘
//int [10] scores = new Sal [10] ??
//자바에서 레퍼런스 타입은 new를 해야 실제 객체가 메모리에 만들어진다.

//c++는 선언하면 바로 만들어짐. 이런 규칙이 배열, 클래스 인스턴스에서도 똑같이 적용됨.
//즉c는 배열 선언하면 배열이 만들어진것. 따로 공간확보작업이 없어도 된다.
//int scores [10];
//int [10] scores;
//이런 규칙이 클래스 인스턴스에서도 똑같이 적용됨.

//2. java/js : scores.length => 배열의 크기
// c++ : length (x)

