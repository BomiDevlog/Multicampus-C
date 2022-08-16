#include <iostream>
// iostream(입출력관련기능 -키보드입력 모니터출력)이라는 
// 파일을 포함시켜라. 자바의 import기능.

// using namespace std;
// standard의 약어

// 자바 언어의 경우, 프로그램이 시작되는 곳은 entry point (시작위치)
//  클래스안에 static void main(~){}  여기의 스태틱이 바로 진입점!
int main(int argc, char const *argv[])
//반환값타입이 int // (int~~) 매개변수

//C언어가 시작되는 지점이 main. 시작점만큼은 이름을 못바꿈.

//자바는 함수가 없고 클래스안에 메서드가 있어서 기능수행
//자바스크립트나 C언어는 함수로 기능. 클래스와 별개로 독립적으로 존재가능하며
//재사용가능하고 기능한다. main도 함수의 이름이다



{
    //cout << "Hello World" << endl;
    // 5번줄을 주석처리하니까 22번줄에러 -> 네임스페이스 찾을 수없어서 cout, endl 정의되지않음

    // cout: 콘솔 아웃풋의 약자 (씨아웃)=> 모니터 출력을 담당하는 클래스 (자바의 System.out)
    // console : 기본 입출력 장치
    // << : 비트 시프트 연산자 (원래 정의된 기능)
    // c++은 연산자 재정의 기능이 있음. 기존 연산자외에 다른 연산자를 만들어낼 수 있음.
    // 연산자 재정의 기능을 통해 오른쪽 문자열을 cout으로 보내는 의미로 재정의됨 재사용 가능
    // endl : '\n' 줄바꿈 (엔드라인)// ; 세미콜론으로 문장 끝

     std::cout << "Hello World" << std::endl;
     //(추가된 필기)
     //std라는 네임스페이스에서 정의하는 cout, endl라고 말해줌.
     //iostream에 표준네임스페이스로 정의되어있기때문에
     // 매번  쓰면 반복적인 코드가 늘어나니까 
     //맨 앞 5번줄에서 정의해주고 짧고 간결한 22번 라인으로 코드를 작성한느 것.
    
    // 

    return 0;

    //한줄 주석
    /*복문 주석*/

    /* 코드러너 실행
    [Running] cd "c:\iot\cpp\chapter01\" && g++ ex01helloworld.cpp -o ex01helloworld && "c:\iot\cpp\chapter01\"ex01helloworld
    &&기준으로 끊어서 해석
    cd (체인지 디렉토리의 약자) : 디렉토리 이동할 때의 명령어

    디렉토리이동하고. 
    && mingw의 bin에 있는 g++(c++컴파일러)로 해당 파일을 컴파일해라 -o 아웃풋의 약어. 컴파일한 파일을 ex01~확장명 exe로 만듬 
    && exe를 실행함 (헬로월드 출력.)
    (절차지향 프로그램)
    
    ex01.cpp ---------> ex01.exe
            컴파일 g++

    이걸 실행했더니 Hello World 이렇게 출력.
    */

}