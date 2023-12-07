#include <iostream>
#include <cstring>

using namespace std;

class MyClass{
public: //접근 제한자
    MyClass(){ // 클래스 이름과 같은 멤버함수로 생성자를 만들때 매개변수를 다양하게 생성 가능
        cout << "MyClass()" << '\n';
    }
    
    MyClass(int n){
        cout << "MyClass(int n)" << '\n';
        
        this->n_ = n;
    }
    ~MyClass(){ // ~가 붙은 소멸자
        cout << "~MyClass()" << '\n';
    }
    
    void Increment(int a){
        n_ += a;
    }
    
    void Print(){
        cout << n_ << '\n';
    }
    
private:
    int n_ = 0; // 초기값;
};

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    MyClass my_class1;
    MyClass my_class2(123);
    
    my_class1.Print();
    my_class2.Print();
    
    my_class1.Increment(1);
    my_class1.Print();
    
    cout << &my_class1 << '\n';
    cout << &my_class2 << '\n';
    return 0;
}

