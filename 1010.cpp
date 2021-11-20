#include <bits/stdc++.h>

using namespace std;

int MAX = -10e14, idx;

int main() {
	for (int i = 0; i < 9; i++) {
		int t;
		cin >> t;
		if (t > MAX) {
			MAX = t;
			idx = i + 1;
		}
	}
	
	cout << MAX << '\n' << idx;
	
	return 0;
}
