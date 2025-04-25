#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	for (int i = 1; i <= 2 * n - 1; i++) 
	{
		int stars = (i <= n) ? 2 * i - 1 : 2 * (2 * n - i) - 1;
		int spaces = (2 * n - 1 - stars) / 2;

		for (int j = 0; j < spaces; ++j) cout << ' ';
		for (int j = 0; j < stars; ++j) cout << '*';

		cout << endl;
	}

	return 0;
}