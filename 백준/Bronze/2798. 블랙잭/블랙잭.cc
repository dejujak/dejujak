#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n=0;
	int m=0;
	int answer = 0;

	cin >> n >> m;

	vector<int> arr(n);

	for (int& num : arr) cin >> num;

	for (int i = 0; i < n-2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			for (int k = j+1; k < n; k++) {
				int sum = arr[i] + arr[j] + arr[k];

				if (sum == m) {
					cout << m;
					return 0;
				}

				if (sum < m && answer < sum) {
					answer = sum;
				}
			}
		}
	}

	cout << answer;

	return 0;
}