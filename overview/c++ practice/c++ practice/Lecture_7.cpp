#define MAX_SIZE 100
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char answer[MAX_SIZE];

	while (true) {
		cout << "종료하고싶으면 yes를 입력하세요>>";
		cin.getline(answer, MAX_SIZE);

		if (strcmp(answer, "yes") == 0) {
			cout << "종료합니다...";
			break;
		}
	}
}