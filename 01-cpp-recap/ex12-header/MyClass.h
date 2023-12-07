#ifndef MyClass_h
#define MyClass_h


class MyClass{
public:
    MyClass();
    MyClass(int n);
    ~MyClass();
    
    void Increment(int a);
    void Decrement(int a);
    void Print();
    
private:
    int n_ = 0;
};


#endif /* MyClass_h */
