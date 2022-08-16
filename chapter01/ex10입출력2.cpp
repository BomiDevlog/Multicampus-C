#include <iostream>
#include <string>
using namespace std;

//인코등을 UTF-8이 아닌 Korean(EUC-KR)로 설정

int main(int argc, char const *argv[]){
    //cout : 출력
        //cin : 입력
    int i;
    cout << "정수를 입력하세요: ";
    cin >> i;

    double f;
    cin >> f;

    cout << i << " " << f << endl;


    return 0;
}
