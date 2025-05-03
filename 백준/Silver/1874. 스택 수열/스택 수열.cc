#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> sequence(n);
	for (int i = 0; i < n; ++i) {
		cin >> sequence[i];
	}

	stack<int> st;
	vector<char> result;
	int cur = 1;
	bool success = true;

	for (int i = 0; i < n; i++) {
		int target = sequence[i];

		while (cur <= target) {
			st.push(cur++);
			result.push_back('+');
		}

		if (st.top() == target) {
			st.pop();
			result.push_back('-');
		}
		else {
			success = false;
			break;
		}
	}

	if (success) {
		for (char& op : result)
			cout << op << "\n";
	}
	else {
		cout << "NO\n";
	}

	return 0;
}