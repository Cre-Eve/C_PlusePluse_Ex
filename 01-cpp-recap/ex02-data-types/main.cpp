#include <iostream> // iostream이라는 헤더를 포함(include)

using namespace std; // std라는 이름공간 사용

int main(){  // entry point
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cout << "Hello, World" << endl;
    
    int i; // 변수 정의, 자료형은 바꿀 수 없다.
    //변수를 정의할 때 자료형을 미리 지정
    
    i = 123; // 변수에 값 지정 (객체 레퍼런스 아님)
    
    cout << i << ' ' << sizeof(i) << endl;
    
    //123 4 <- int의 크기 4
    
    cout << sizeof(int) << endl;
    
    // 4
    
    cout << 123 + 4 << ' ' << sizeof(123 + 4) << endl;
    
    // 127 4 <- 정수이므로 4
    
    float f = 123.456f; // 마지막 f 주의
    double d = 123.456; // f 불필요
    
    cout << f << ' ' << sizeof(f) << endl; //123.456 4
    cout << d << ' ' << sizeof(d) << endl; //123.456 8
    
    //C++은 글자 하나와 문자열을 구분
    
    char c = 'a';
    char str[] = "Hello, World!"; // std::string
    
    cout << c << ' ' << sizeof(c) << endl; // a 1
    
    //형변환
    
    i = 987.654; // 987로 저장된다.
    
    f = 567.89; // 이것도 형변환 f -> 더블로 변경
    
    // i = 987
    // i += 100 -> 1087
    // i++ -> 1088
    
    bool is_good = true; // 1
    is_good = false; // 0
    
    cout << boolalpha << true << endl; // 1이 아닌 true로 출력됨
    cout << noboolalpha << true << endl; // true가 아닌 1이 출력
    
    cout << boolalpha;
    cout << (true & true) << endl; // 1
    cout << (true || false) << endl; // 실행 안됨
    
    cout << (3 == 3) << endl; // true
    cout << ('a' != 'a') << endl; // false;
    
    // 영역(scope)
    
    i = 123;
    
    {int i = 345;
        cout << i << endl; // 345 출력}
    }
    
    cout << i << endl; // 123 출력
    
    return 0;
}
