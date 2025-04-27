#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N=0;
	bool swapped=false;
	bool isSame = false;

	cin >> N;
	
	vector<long long> arrA(N);
	vector<long long> arrB(N);

	for (long long& num : arrA) cin >> num;
	for (long long& num : arrB) cin >> num;

	if (arrA == arrB) {
		cout << 1;
		return 0;
	}

	for (int i = 0; i < N - 1; i++) {
		swapped = false;

		for (int j = 0; j < N - i - 1; j++) {
			if (arrA[j] > arrA[j + 1]) {
				swapped = true;

				swap(arrA[j], arrA[j + 1]);

				if (arrA[j] != arrB[j] || arrA[j + 1] != arrB[j + 1]) continue;

				if (arrA == arrB) {
					isSame = true;
					break;
				}
			}
		}

		if (isSame) {
			break;
		}
		if (!swapped) {
			break;
		}
	}

	if (isSame) {
		cout << 1;
	}
	else {
		cout << 0;
	}
	
	return 0;
}