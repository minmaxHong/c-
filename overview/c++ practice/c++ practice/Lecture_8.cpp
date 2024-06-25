#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "5 명의 이름을 ';'으로 구분하여 입력하세요\n";
	string names;
	getline(cin, names);

	string name[5];
	int name_stop_lenght = 0;
	int i = 0;
	int j = 0;
	for (j = 0; j < 5; ++j) {
		for (i = 0 + name_stop_lenght; i < names.length(); ++i) {
			if (names[i] == ';') {
				name_stop_lenght += 1;
				break;
			}
			name[j] += names[i];
			name_stop_lenght += 1;
		}
	}
	for (int i = 0; i < 5; ++i) {
		cout << i + 1 << " : " << name[i] << endl;
	}
}