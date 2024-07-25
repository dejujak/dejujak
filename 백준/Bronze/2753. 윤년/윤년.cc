#include <iostream>
using namespace std;

int main() 
{
	int year = 0;
	bool isTrue = false;

	cin >> year;

	isTrue = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;

	cout << (isTrue ? 1 : 0);
	
	return 0;
}