#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "�� ��ȣ�� �Է��ϼ���>>";
	string password;
	getline(cin, password);
		
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
	string newPassword;
	getline(cin, newPassword);

	if (password == newPassword) {
		cout << "�����ϴ�.";
	}
	else {
		cout << "���� �ʽ��ϴ�.";
	}
}