#include <iostream>
#include <cstring>

#include "MyClass.h"

using namespace std;

// 헤더파일 정리 팁

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    MyClass my_class1;
    MyClass my_class2(123);
    
    my_class1.Print();
    my_class2.Print();
    
    my_class1.Increment(1);
    my_class1.Print();
    
    return 0;
}
