#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main() {
	int T;

	cin >> T;
	cin.ignore();

	vector<string> arr(T);

	for (string& value : arr) getline(cin,value);

	for (string& answer : arr) {
		stack<char> st;
		bool isVPS = true;

		for (char c : answer) {
			if (c == '(') {
				st.push(c);
			}
			else {
				if (st.empty()) {
					isVPS = false;
					break;
				}
				else {
					st.pop();
				}
			}
		}

		if (!st.empty()) isVPS = false;

		if (isVPS) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}