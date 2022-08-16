#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *){

    int count = 12;
    //int count = {12};

    string name ="홍길동은";
    //string name={"홍길동"};
    cout << name << endl;

    cout << count; // endl 부르지않았으니 System.out.print()
    cout << "개의 사과가 있습니다" 
         << endl;// endl 부르니 System.out.println()

    cout << endl; //공백 줄 간격

    cout << 10 
         << "개의 오렌지가 있습니다" 
         <<endl;
    return 0;
}