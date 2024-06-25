#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "문자들을 입력하라(100개 미만).\n";

	string words;
	getline(cin, words);

	int cnt = 0;
	for (int i = 0; i < words.length(); ++i) {
		if (words[i] == 'x') {
			cnt += 1;
		}
	}
	cout << "x의 개수는 " << cnt;
}