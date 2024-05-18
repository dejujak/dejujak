#include <iostream>
using namespace std;

int main() {
	int num01;
	int num02;
	int count = 0;
	bool isNum=false;
	
	cin >> num01>>num02;

	for (int i = 1; i <= num01; i++) {
		if (num01 % i == 0) {
			count++;
			if (count == num02) {
				cout << i;
				isNum = true;
			}
		}
	}

	if (count != num02&&!isNum) {
		cout << "0";
	}

	return 0;
}