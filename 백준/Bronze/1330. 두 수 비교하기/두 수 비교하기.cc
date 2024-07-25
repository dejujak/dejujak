#include <iostream>
using namespace std;

int main() 
{
	int A=0;
	int B=0;

	cin >> A >> B;

	if (A > 10000 || B > 10000 || A < -10000 || B < -10000) {
		return 0;
	}

	if (A > B) {
		cout << ">";
	}
	else if (A < B) {
		cout << "<";
	}
	else if (A == B) {
		cout << "==";
	}
	return 0;
}