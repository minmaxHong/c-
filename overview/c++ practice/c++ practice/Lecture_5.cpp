#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "���ڵ��� �Է��϶�(100�� �̸�).\n";

	string words;
	getline(cin, words);

	int cnt = 0;
	for (int i = 0; i < words.length(); ++i) {
		if (words[i] == 'x') {
			cnt += 1;
		}
	}
	cout << "x�� ������ " << cnt;
}