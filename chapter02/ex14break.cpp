#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    for(int i=1; i<10; i++){
        cout << i << " ";
        if(i==4) break; 
    }
// break : 주로 if문과 쓰이며, 특정 조건이 되면 반복문을 중단하고 중괄호를 벗어난다.
//continue : 뒷문장을 실행하지말고 증감식으로 가라
    return 0;
}