#include <string.h>
using namespace std;
/*소멸자*/

class MyString{
private:
    char *s;
    int size;
public:
    MyString(char *c){
        size = strlen(c) + 1;
        s = new char [size];
        strcpy(s, c);
    }
    ~MyString(){ // 소멸자
        delete[]s;
    }
};
int main(){
    MyString str("abcdefghijk");
}

