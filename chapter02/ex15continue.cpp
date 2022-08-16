#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    for(int i=1; i<5; i++){
        cout << " the sentence before the continue sentence" << endl;
        continue;
        cout <<  "the sentence after the continue sentence" << endl;
        //자바의 경우 실행될수 없는 코드라서 도달할 수 없다고 에러나지만, 
        //c의 경우엔 불가능코드 있어도 실행.
        
    }
// break : 주로 if문과 쓰이며, 특정 조건이 되면 반복문을 중단하고 중괄호를 벗어난다.
//continue : 뒷문장을 실행하지말고 증감식으로 가라
    return 0;
}