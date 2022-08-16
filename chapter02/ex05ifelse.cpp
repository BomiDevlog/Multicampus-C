#include <iostream>
using namespace std;


int main(int argc, char const *argv[]){
    int x,y;

    cout << "Input x value : ";
    cin >> x;

    cout << "Input y value : ";
    cin >> y;


    if(x > y){
        cout << "x is bigger than y." << endl;
    }else {
        cout << "y is bigger  than or equal to x." << endl;
    }

    return 0;
}