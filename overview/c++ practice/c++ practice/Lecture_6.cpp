#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "새 암호를 입력하세요>>";
	string password;
	getline(cin, password);
		
	cout << "새 암호를 다시 한 번 입력하세요>>";
	string newPassword;
	getline(cin, newPassword);

	if (password == newPassword) {
		cout << "같습니다.";
	}
	else {
		cout << "같지 않습니다.";
	}
}