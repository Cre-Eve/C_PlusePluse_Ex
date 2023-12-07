#include <iostream>

using namespace std;

// 입력받은 문자열이 stop인경우 프로그램 종료

const int kMaxStr = 100; // 전역변수 const를 사용하여 변경안함을 알림

bool IsEqual(const char str1[], const char *str2){
    //str1[]또는 포인터인 *str2를 이용하여 매개변수를 입력받는다.
    
    for(int i = 0 ; i <kMaxStr; i++){
        if(str1[i] != str2[i]){
            return false;
        }
        
        if(str1[i] == '\0'){
            return true;
        }
    }
    
    return true;
}
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    const char str1[kMaxStr] = "stop";
    
    while(1){
        char str2[kMaxStr];
        
        cin >> str2;
        
        if(IsEqual(str1, str2)){
            cout << "종료합니다" << '\n';
            
            return 0;
        }
        else{
            cout << "다시입력해주세요." << '\n';
        }
    }
    return 0;
}
