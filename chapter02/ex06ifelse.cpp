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
    }else if(x < y){
        cout << "y is bigger  than x." << endl;
    }else{
        cout << " x is equal to y." << endl;
    }

    return 0;
}