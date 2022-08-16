#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    long fact = 1;
    int n;

    //반복횟수를 입력받는다.
    cout << "Enter an integer: ";
    cin >> n;

    for (int i=1; i<=n; i++){
        fact = fact*i;
    }

    cout << n << "! = " << fact << endl;
    return 0;
}