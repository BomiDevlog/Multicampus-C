#include <iostream>
using namespace std;
/*배열의 초기화*/

int main(int argc, char const *argv[]){
    const int STUDENTS = 5;

    int scores [STUDENTS] = {
        100, 200, 300, 400, 500
    }; // 데이터가 고정됨 = hard coding
    
    int sum = 0;
    int i, average;

// 배열의 순회(itervation)를 범위기반for문으로 표현
    for(auto& i : scores){
        sum+= i; 
    }

    average = sum / STUDENTS;
    cout << "average grade= " << average << endl;

    return 0;
}

/*
초기화할 때 
값을 딱 맞게 주는 경우 [o] 
값을 적게 주는 경우 -> [o]남는 칸은 0
값을 많이 주는 경우 -> [x]에러

int sales [5]={100, 200, 300, 400, 500};
int sales []={100, 200, 300, 400, 500, 600, 700};

int sales [] = {10,20,30};
int sales [] {10,20,30}; //컴파일러 버전에 따라 되기도 안되기도.
*/

/*배열의 장점: 속도(빠르게 데이터 처리 가능)
배열의 단점: 크기가 고정되어 있다. 

그래서 자바에서 콜렉션을 더 많이 사용! ArrayList, LinkedList 등*/