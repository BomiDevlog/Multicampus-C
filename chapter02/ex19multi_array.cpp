#include <iostream>
using namespace std;
/*다 차원 배열*/
#define WIDTH 9
#define HEIGHT 3 
//C 언어의 상수정의 : type지정할 수 없음. 디폴트로 int.
//C++이후 const로 상수정의 : type을 지정할 수 있음. 

int main(int argc, char const *argv[]){
    //[1] 이차원 배열 생성
    int table[HEIGHT][WIDTH]; //배열생성. 초기화되지않음. 
    //{}{} 값대입해주지않은 상태. c++ 지역변수의 초기화는 자동으로 일어나지않기에 들어있는 값은 알수없음 (0아님)
    int r, c;

    //[2] 이차원 배열 초기화 : 값 대입 
    for(r=0; r< HEIGHT; r++){
        for(c=0; c<WIDTH; c++){
            table[r][c] = (r+1)*(c+1);
        }
    }    
    //2차원배열을 순회하는 이중 for문에서 바깥for에서 높은 차원 인덱스관리, 안쪽 for에서 낮은차원 인덱스 관리

    //[3] 이차원 배열 출력
    for(r=0; r<HEIGHT; r++){
        for(c=0; c<WIDTH; c++){
            cout << table[r][c] << ", ";
        }
        cout << endl;
    }

    return 0;
}

// 0817 학습내용
//c++: 2차원배열, 함수와 문자열
//아두이노 -개발환경구축. led제어. 버튼 제어
//led 불빛. 동작원리. 제어방식. 버튼(스위치) 어떻게 감지해서 어떻게 처리하는지

//iot에서는 이차원배열이 많이 쓰이진 않지만 머신러닝딥러닝쪽에서 다차원배열을 많이 사용!

//함수 -매개변수를 어떻게 주고 받는지. 참조변수에 대해 깊게.
//c++이 여기까지 c언어와 유사함

//클래스는 다름. 자바와 비교해가며 알아가자.

//3차원 s[][][] cube형태 x,y,z축 . 3d입체
