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

	cout << "5 ���� �Ǽ��� �Է��϶�>>";
	for (int x = 0; x < 5; ++x) {
		cin >> num[x];
	}

	cout << "���� ū �� = " << largeNumber(num, sizeof(num) / sizeof(num[0]));
}