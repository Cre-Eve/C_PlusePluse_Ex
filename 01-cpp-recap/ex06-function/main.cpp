#include <iostream>

using namespace std;

int Add(int a, int b);
// 선언과 정의 분리 가능

// 반환 자료형이 지정되지 않음
void Add(int a, int b, int *c){
    *c = a + b;
    // 포인터를 사용하여 반환값 저장
    // 반환값이 여러개일 경우 이용하기 좋다
}

int main(){
    cout << Add(1, 2) << '\n';
    
    int sum;
    
    Add(4, 5 ,&sum);
    cout << sum << '\n';
    
    return 0;
}

int Add(int a, int b){
    return a + b; // 반환값 안내
}
