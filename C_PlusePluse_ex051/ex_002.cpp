//���űݾ� 1% --> ����Ʈ ����

#include<iostream>
using namespace std;

int main() {

	// char irum[10]; // ���� �Է� ����
	char irum[30];
	cout << "������ �Է����ּ��� \n";
	//cin >> irum;
	cin.getline(irum, sizeof(irum));
	cout << "���� �ݾ��� �Է����ּ���" << std::endl;
	int caltot, calpoint;

	cin >> caltot;
	calpoint = caltot * 0.01;

	cout <<  irum << " �� �̹��� �߻��� ����Ʈ = " << calpoint << "�� �Դϴ�.\n";


	//namespace : �������� �������� ���̺귯��, �Լ� Ȥ�� Ŭ���� ���� �ߺ��Ǿ� ������ ���� ������ �߱��� �� �����Ƿ�, �̵��� �����Ͽ� �ߺ����� �ʵ��� �ϴ� Ű���带 �ǹ��Ѵ�.
	//���ӽ����̽��� �����ϱ� ���� using�� ��� ex) using namespace std; ���� std:: ��������
}