#include <iostream>
using namespace std;


int main(int argc, char const *argv[]){
    int number;

    cout << "Input a number: ";
    cin >> number;

    switch(number){
        case 0:
            cout << "zero\n";      
        case 1:
            cout << "one\n";  
        case 2:
            cout << "two\n";  
        default:
            cout << "many\n";
            break;
    }

    return 0;
}

//break가 없으니 1입력 시 1부터 계속 출력됨