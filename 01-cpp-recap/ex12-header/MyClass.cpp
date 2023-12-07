#include "MyClass.h"
#include <iostream>

using namespace std;

MyClass::MyClass(){
    //호출 시점 확인
    cout << "MyClass()" << '\n';
}

MyClass::MyClass(int n){
    cout << "MyClass(int n)" << '\n';
    
    this -> n_ = n;
}

MyClass::~MyClass(){
    // 호출 시점 확인
    cout << "~MyClass()" << '\n';
}

void MyClass::Increment(int a){
    n_ += a;
}

void MyClass::Print(){
    cout << n_ <<'\n';
}
