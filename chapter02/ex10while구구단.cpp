#include <iostream>
using namespace std;

int main (int argc, char const *argv[]){
    int n;
    int i = 1;

    cout << "Enter the level you want to print out in multiplication table: ";
    cin >> n;

    while (i<=9){
        cout << n << " x " << i    
             << " = " << n*i <<endl;
        i++;
    }
    return 0;
}