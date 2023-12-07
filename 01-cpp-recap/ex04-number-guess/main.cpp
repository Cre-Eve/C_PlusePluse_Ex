#include <iostream>
#include <random>

// 숫자 맞추기 프로그램 구현

using namespace std;

random_device rd; // 시드 값을 얻기 위한 random_device 생성
mt19937 gen(rd());  // random_device를 통해 난수 생성 엔진 초기화

uniform_int_distribution<> distrib(1, 99); // 1 ~ 99 균등하게 균등분포 정의

int main(){

    int n = distrib(gen);
    
    while(1){
        int guess;
        
        cout << "입력 : ";
        cin >> guess;
        
        if(guess > n){
            cout << "너무 커요!" << '\n';
        }
        else if(guess < n){
            cout <<"너무 작아요 !" << '\n';
        }
        else{
            cout << "정답!" <<'\n';
            
            return 0;
        }
    }
}
