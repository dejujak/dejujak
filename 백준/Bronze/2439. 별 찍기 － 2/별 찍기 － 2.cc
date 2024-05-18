#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	for (int i = 1; i < num+1 ; i++) {
		for (int k = 0; k < num-i; k++) {
			cout << " ";
		}

		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << std::endl;
	}

	return 0;
}