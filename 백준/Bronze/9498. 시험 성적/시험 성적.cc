#include <iostream>
using namespace std;

int main() 
{
	int score = 0;

	cin >> score;

	switch (score/10) {
	case 10:
	case 9:
		cout << "A";
		break;
	case 8:
		cout << "B";
		break;
	case 7:
		cout << "C";
		break;
	case 6:
		cout << "D";
		break;
	default:
		cout << "F";
	}
	return 0;
}