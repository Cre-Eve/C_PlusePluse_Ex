#include <iostream>
#include <cstring>

using namespace std;

class MyString{
public:
    MyString(const char *init_str){
        cout << "MyString(const char *init_str)" << '\n';
        
        size_ = 0;
        
        // 1. 글자수 확인
        while(init_str[size_] != '\0'){
            size_++;
        }
        // 2. 글자수가 0이 아니면 메모리 할당
        
        if(size_ > 0){
            str_ = new char[size_];
        }
        // 3. 복사
        for(int i = 0 ; i < size_; i++){
            str_[i] = init_str[i];
        }
        //memcpy() 사용 가능
    }
    
    ~MyString(){
        // 호출 시점 확인
        cout << "Destructor" << '\n';
        
        size_ = 0;
        if(str_){
            delete[] str_;
        }
    }
    
    void Resize(int new_size){
        char *new_str = new char[new_size];
        
        //memcpy() 사용 가능
        for(int i = 0 ; i < (new_size < size_ ? new_size : size_); i++){
            new_str[i] = str_[i];
        }
        delete[] str_;
        str_ = new_str;
        size_ = new_size;
    }
    
    void Print(){
        for(int i = 0 ; i < size_; i++){
            cout << str_[i];
        } // 마지막에 널 캐릭터 보장이 안되어있기 떄문에 한글자씩
        cout << '\n';
    }
    
    void Append(MyString *app_str){ // 같은 타입을 매개변수로 사용
        int old_size = size_;
        
        Resize(size_ + app_str -> size_);
        
        for(int i = old_size; i < size_; i++){
            str_[i] = app_str -> str_[i - old_size];
        }
    }
    
private:
    int size_ = 0; // m_size
    char *str_ = nullptr;
};

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    MyString str1("ABCDE");
    MyString str2("123");
    
    str1.Print();
    str1.Append(&str2);
    
    str1.Print();
    
    return 0;
}
