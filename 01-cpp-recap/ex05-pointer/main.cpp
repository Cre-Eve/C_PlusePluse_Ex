#include <iostream>

using namespace std;

int main(){
    
    int a = 123;
    
    cout << a << ' ' << &a << '\n'; // a값  a주소값이 나옴 0x = 16진수
    
    int *b = &a; // b에 a의 주소 대입
    
    cout << b << ' ' << *b << '\n'; // b의 주소와 입력된 값 123
    
    *b = 567; // b가르키는 곳 역참조
    
    cout << a << ' ' << b << ' ' << *b << '\n'; // 567 a의 주소값 567
    
    double c = 2;
    
    cout << sizeof(int) << ' ' << sizeof(double) << '\n'; // 4 8
    cout << sizeof(int *) << ' ' << sizeof(double *) << '\n'; //8 8로 같다.
    
    cout << sizeof(c) << ' ' << sizeof(c + 1) << ' ' << sizeof(c+ 2) << '\n';
    cout << size_t(c) << ' ' << size_t(c + 1) << ' ' << size_t(c+ 2) << '\n';
    
    // 8 8 8 로 double의 크기
    // 2 3 4로 10진수로 변경된 값 2 3 4
    
    int num_a[]{23, 38, 56, 69, 74};
    
    char str[]{'h', 'e', 'l', 'l', 'o'};
    
    char *ptr = str;
    
    cout << *(ptr + 3) << '\n';
    cout << ptr[3] << '\n'; // *(ptr + 3) = ptr[3]
    
    return 0;
}
