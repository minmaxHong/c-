#include <iostream>
using namespace std;

int main() {
	for (int y = 1; y < 10; ++y) {
		for (int x = 1; x < 10; ++x) {
			cout << x << "x" << y << "=" << x * y << '\t';
		}
		cout << endl;
	}
}