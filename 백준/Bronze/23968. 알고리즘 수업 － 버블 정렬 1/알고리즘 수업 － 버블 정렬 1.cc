#include<iostream>
#include<vector>
using namespace std;

int swapCount = 0;
int K = 0;
int smallNum = 0;
int bigNum = 0;

void bubble_sort(vector<int>& arr) {
	int arrSize = arr.size();

	for (int i = 0; i < arrSize - 1; i++) {
		for (int j = 0; j < arrSize - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swapCount++;

				if (swapCount == K) {
					smallNum = arr[j + 1];
					bigNum = arr[j];
				}

				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

int main() {
	int N;

	cin >> N >> K;

	vector<int> arr(N);

	for (int& num : arr) cin >> num;

	bubble_sort(arr);

	if (swapCount < K) {
		cout << -1;
	}
	else {
		cout << smallNum << " " << bigNum;
	}

	return 0;
}