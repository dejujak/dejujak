#include <iostream>
#include <vector>
using namespace std;

int swapCount = 0;
int k = 0;

void selection_sort(vector<long long>& arr) {
	int arrSize = arr.size();

	for (int i = arrSize-1; i >=1; i--) {
		int maxIndex = 0;

		for (int j = 1; j <= i; j++) {
			if (arr[j] > arr[maxIndex]) {
				maxIndex = j;
			}
		}

		if (i != maxIndex) {
			swapCount++;

			if (k == swapCount) {
				cout << arr[i] << " " << arr[maxIndex];
				break;
			}

			swap(arr[i], arr[maxIndex]);
		}
	}
}
int main() {
	int n;

	cin >> n >> k;

	vector<long long> arr(n);
	for (long long& num : arr) cin >> num;

	selection_sort(arr);
	
	if (k > swapCount) {
		cout << -1;
	}

	return 0;
}