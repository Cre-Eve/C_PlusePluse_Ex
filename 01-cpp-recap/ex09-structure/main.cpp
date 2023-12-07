#include <iostream>
#include <cstring>

using namespace std;

struct MyStruct{
    int first;
    int second;
    //... 추가 기능
    
    int Sum(){
        return first + second;
    }
};

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    MyStruct a;
    a.first = 123;
    a.second = 456;
    // . <- member operator라고 부름
    
    cout << sizeof(a) << '\n';
    // 4 + 4 = 8 이상(크거나 같다.)
    cout << a.Sum() << '\n';
    
    // 포인터는 member( -> ) operator가 화살표
    MyStruct *ptr_a = &a;
    
    cout << ptr_a -> first << ' ' << ptr_a -> second << ' ' << ptr_a -> Sum() << '\n';
    
    //배열도 가능
    MyStruct pairs[10];
    
    for(int i = 0; i < 10 ; i++){
        pairs[i].first = i;
        pairs[i].second = i * 10;
    }
    
    for(int i = 0 ; i < 10; i++){
        cout << pairs[i].Sum() << '\n';
    }
    
    return 0;
}
