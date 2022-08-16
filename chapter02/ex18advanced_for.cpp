#include <iostream>
using namespace std;
/*범위기반 for문*/

int main(int argc, char const *argv[]){
    int list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;
    for(int i : list){ //i가 list크기만큼 값이 복사된다
        sum += i; 
    }

    cout << sum << endl << endl;

    for(int& i : list ){ // int& i : 참조변수 선언
        cout << i << " ";
    }
    //&붙이면 참조변수가 된다 // &붙이는게 권장
    //값은 그대로있는데 i가 바뀐다. 복사행위가 없어서 속도가 더 빠름

    cout << endl;

    for(auto& i : list ){
        cout << i << " ";
    }
    //c++에서 가장 권장되는 방식. (중요!!)
    
    return 0;
}