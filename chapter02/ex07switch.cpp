#include <iostream>
using namespace std;


int main(int argc, char const *argv[]){
    int number;

    cout << "Input a number: ";
    cin >> number;

    switch(number){
        case 0:
            cout << "zero\n";
            break;
        case 1:
            cout << "one\n";
            break;
        case 2:
            cout << "two\n";
            break;
        default:
            cout << "many\n";
            break;
    }
    return 0;

    //break를 만나면 값에 해당하면 반복문 벗어남
    
}