#include <iostream>
#include <string>
#include "PhoneBook.h"

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    PhoneBook my_phonebook;
    
    //초기 데이터
    
    my_phonebook.AddContact("OOak", "1111-2222");
    my_phonebook.AddContact("rook", "5432-2222");
    my_phonebook.AddContact("koko", "5959-2222");
    
    int menu_number;
    
    while(true){
        cout << "1 : 모두 출력 \n";
        cout << "2 : 검색 \n";
        cout << "3 : 추가 \n";
        cout << "4 : 삭제 \n";
        cout << "x : 종료 \n";
        cout << "메뉴를 선택해주세요 :  \n";
        
        cin >> menu_number;
        cin.ignore();
        
        if(menu_number == 1){
            my_phonebook.PrintAll();
        }
        else if(menu_number == 2){
            my_phonebook.FindByName();
        }
        else if(menu_number == 3){
            my_phonebook.AddContact();
        }
        else if(menu_number == 4){
            my_phonebook.DeleteByName();
        }
        else{
            cout << "종료합니다." << '\n';
            break;
        }
    }

    return 0;
}
