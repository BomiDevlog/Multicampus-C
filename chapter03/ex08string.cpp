#include <iostream>
#include <string>
using namespace std;
/*string 클래스*/

int main(int argc, char const *argv[]){
    string s = "When in Rome, do as the Romans.";
    
    int size = s.size(); //글자수 : 31 (공백포함)
    int index = s.find("Rome");//문자열 찾기 : 8번 인덱스 (기준: 첫글자 0번)

    cout << size << endl;
    cout << index << endl;

    return 0;
}

