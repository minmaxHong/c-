#include <iostream>
using namespace std;

int largeNumber(int n1, int n2) {
	return n1 > n2 ? n1 : n2;
}

int main() {
	int n1, n2;
	cout << "�� ���� �Է��϶� >> ";
	cin >> n1 >> n2;

	int largeNum = largeNumber(n1, n2);
	cout << "ū �� = " << largeNum;

	return 0;
}