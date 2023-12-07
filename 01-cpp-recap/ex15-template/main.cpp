#include <iostream>
#include <string>

using namespace std;

class MyInt{
public:
    int data_;
};

class MyDouble{
public:
    double data_;
};

template <typename T>
class MyClass{
public:
public:
    T data_;
};

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
   
    MyClass<int> my_int;
    MyClass<double> my_double;
    
    cout << sizeof(my_int) << ' ' << sizeof(my_double) << '\n';
    
    return 0;
}
