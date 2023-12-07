#include <iostream>
#include <cstring>

using namespace std;

int Min(int a, int b){
    return a < b ? a : b;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    //문자열 복사
    char str1[] = "Hello, World";
    char str2[100];
    
    // str2 = str1 <- Error 발생
    
    memcpy(str2, str1, Min(sizeof(str1), sizeof(str2)));
    
    cout << str2 << '\n';
    
    char *dynamic_array = new char[100];
    // 주의 : 동적할당 메모리는 변수 사이즈가 포인터 사이즈
    
    memcpy(dynamic_array, str1, Min(sizeof(str1), 100));
    cout << dynamic_array << '\n';
    cout << size_t(str1) << ' ' << size_t(str2) << ' ' << size_t(dynamic_array) << '\n';
    
    //결과를 통해 정적은 stack 동적은 heap에 있는 것을 알 수 있다.
    
    delete[] dynamic_array; // 배열 삭제시 [] 이용
  
    // 지우지 않고 재할당할 경우 잃어버림
    // dynamic_array = new char[원하는 크기];
    // delete[] dynamic_array; 생성후 다시 지워줘야 함
    
    return 0;
}
