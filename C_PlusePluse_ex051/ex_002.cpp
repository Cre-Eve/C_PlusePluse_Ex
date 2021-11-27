//구매금액 1% --> 포인트 적립

#include<iostream>
using namespace std;

int main() {

	// char irum[10]; // 공백 입력 못함
	char irum[30];
	cout << "성함을 입력해주세요 \n";
	//cin >> irum;
	cin.getline(irum, sizeof(irum));
	cout << "구매 금액을 입력해주세요" << std::endl;
	int caltot, calpoint;

	cin >> caltot;
	calpoint = caltot * 0.01;

	cout <<  irum << " 님 이번에 발생한 포인트 = " << calpoint << "점 입니다.\n";


	//namespace : 여러개의 전역적인 라이브러리, 함수 혹은 클래스 등이 중복되어 컴파일 상의 문제를 야기할 수 있으므로, 이들을 구분하여 중복되지 않도록 하는 키워드를 의미한다.
	//네임스페이스를 생략하기 위헤 using문 사용 ex) using namespace std; 사용시 std:: 생략가능
}