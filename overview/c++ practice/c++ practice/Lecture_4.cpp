#include <iostream>
using namespace std;

double largeNumber(double* num, int size) {
	double max_num = num[0];
	for (int x = 1; x < size; ++x) {
		if (max_num < num[x]) {
			max_num = num[x];
		}
	}
	return max_num;
}

int main() {
	double num[5];

	cout << "5 개의 실수를 입력하라>>";
	for (int x = 0; x < 5; ++x) {
		cin >> num[x];
	}

	cout << "제일 큰 수 = " << largeNumber(num, sizeof(num) / sizeof(num[0]));
}