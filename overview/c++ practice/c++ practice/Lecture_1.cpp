#include <iostream>
using namespace std;

int main() {
	int n = 1;
	for (int y = 0; y < 10; ++y) {
		for (int x = 1; x <= 10; ++x) {
			cout << n << "\t";
			n += 1;
		}
		cout << endl;
	}
}