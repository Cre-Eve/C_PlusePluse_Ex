#include <iostream>

using namespace std;


int main(){
    
    int a[3]{1,2,3};
    
    cout << a[0] << ' ' << a[2] << '\n'; // 1 3
    
    char name[10] = "Hi!!!!";
    
    cout << name << ' ' << sizeof(name) << '\n';  // 글자 수 + '\0'
    
    name[2] = '\0';
    
    cout << name << '\n'; // '\0'을 만나면 끝이되기 때문에 Hi만 나옴
    
    //char my_name[] = "Hello, Wook!"; // 문자''와 '\0'을 포함한 만큼 지정
    
    char user_input[100];
    
    cin >> user_input; // 빈칸 및 줄바꿈 생기면 그전까지만 저장
    
    cin.getline(user_input, sizeof(user_input)); // 저장할 곳, 최대 크기, 줄바꿈나오기전까지 입력
    
    cin.ignore(100, '\n'); // 최대 100글자 입력받고 그 이후 또는 줄바꿈시 무시
    
    //참고 cin.ignore(numeric_limits<streamsize>::max(), '\n)
    
    int n;
    
    cin >> n;
    
    if(n % 2 == 0){
        cout << "even" <<'\n';
    }
    else{
        cout << "odd" << '\n';
    }
    
    cout << (n%2 == 0 ? "even" : "odd") << '\n';
    
    switch(n){
        case 0:
            cout << "0" << '\n';
            break;
        case 1:
            cout << "1" << '\n';
            break;
        default:
            cout << "number" << '\n';
            break;
    }
    
    
    for(int i = 0; i < 10; i++){
        cout << i << ' ';
    }
    cout << '\n';
    
    int aa[]{1,2,3,4,5,4,3,2,1};
    
    for(int i = 0 ; i < sizeof(aa) / sizeof(int); i++){
        cout << aa[i] << ' ';
    }
    
    char c[] = "Hello\0, World!";
    
    for(int i = 0; i < sizeof(c); i++){ // for(int i = 0; i != '\0'; i++){
        if(c[i] == '\0'){
            break;
        }
        cout << c[i];
    }
    cout << '\n';
    
    int j = 0;
    
    while(true){ // for(;true;) 와 같다.
        cout << j << ' ';
        
        j++;
        if(j == 10){
            break;
        }
    }
    cout << '\n';
}
