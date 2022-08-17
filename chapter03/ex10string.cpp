#include <iostream>
#include <string>
using namespace std;
/*string 클래스*/

int main(int argc, char const *argv[]){
    string list[] = { "Hong Gil Dong", "Go Gil Dong", "Dooly" };
    
    for(auto& name: list){
        cout << name << endl;
    }

    return 0;
}

