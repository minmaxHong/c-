#define MAX_SIZE 100
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char answer[MAX_SIZE];

	while (true) {
		cout << "�����ϰ������ yes�� �Է��ϼ���>>";
		cin.getline(answer, MAX_SIZE);

		if (strcmp(answer, "yes") == 0) {
			cout << "�����մϴ�...";
			break;
		}
	}
}