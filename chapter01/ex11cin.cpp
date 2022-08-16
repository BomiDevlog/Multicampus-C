#include <iostream>
#include <string>
using namespace std;



int main(int argc, char const *argv[]){
    //cout : 출력
    //cin : 입력
    
    string name;
    cout << "Input your name: ";
    cin >> name;

    cout << name << ", Welcome!" << endl;
    return 0;
}

// 설정에서 runner save 검색 -> 런 코드 할때 자동으로 저장해주는 기능