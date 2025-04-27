#include <iostream>
#include <vector>
using namespace std;

void Quick_Sort(vector<long long>& arr, int left, int right) {
	if (left >= right) return;

	int pivot = right;
	long long pValue = arr[pivot];

	int i = left;
	int j = pivot - 1;

	while (i <= j) {
		while (i <= j && arr[i] >= pValue) i++;
		while (i<=j && arr[j] <= pValue) j--;

		if (i < j) swap(arr[i], arr[j]);
	}

	swap(arr[i], arr[pivot]);

	Quick_Sort(arr, left, i-1);
	Quick_Sort(arr, i + 1, right);
}

int main() {
	string s;
	cin >> s;

	vector<long long> arr(s.length());
	int index = 0;
	
	for (char c : s) {
		arr[index] = c - '0';
		index++;
	}

	Quick_Sort(arr, 0, arr.size() - 1);

	for (long long& num : arr) cout << num;

	return 0;
}