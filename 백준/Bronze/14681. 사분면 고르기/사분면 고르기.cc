#include <iostream>
using namespace std;

int main() 
{
	int x = 0;
	int y = 0;
	int correct = 0;

	cin >> x;
	cin >> y;

	if (x > 0 && y > 0) {
		correct = 1;
	}
	else if (x > 0 && y < 0) {
		correct = 4;
	}
	else if (x < 0 && y > 0) {
		correct = 2;
	}
	else if (x < 0 && y < 0) {
		correct = 3;
	}

	cout << correct;

	return 0;
}