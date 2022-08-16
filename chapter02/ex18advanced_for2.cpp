#include <iostream>
using namespace std;
/*범위기반 for문*/

int main(int argc, char const *argv[]){
    int list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 
    for(auto i : list ){ // auto i 변수선언 (int i;)
        i = i * 10;
    } 
    //auto i 일때 지역변수 i 에 10을 곱해주어도 실제 배열값에 영향은없다.
    //10을 곱했지만 실제 배열값은 그대로 보존됨. => 지역변수라서.

    //auto&i로 바꿔주면 참조변수가 되어, 원본자체를 나타내게됨. 그래서 실제배열값을 변경시킴

    for(auto& i : list ){
        cout << i << " ";
    }

    //auto i 일 때 
    // 10 20 30 ,... 100 : auto& i
    // 1 2 3 ,... 10  : auto i
    
    //위아래가
    // auto i   auto i => 1~
    // auto i   auto& i => 1~
    // auto& i   auto i => 10~
    // auto& i   auto& i => 10~

    //int i, int i 중복선언 불가
    //위의 경우는 for문에서만 작용한 지역변수라서 범위가 안겹쳐서 가능.



    cout << endl;
    return 0;
}