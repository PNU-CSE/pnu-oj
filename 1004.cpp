#include <bits/stdc++.h>

using namespace std;

int n;
int MAX = -10e14;
int MIN = 10e14;

int main() {
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		MAX = max(MAX, t);
		MIN = min(MIN, t);
	}
	
	cout << MIN << " " << MAX;
	
	return 0;
}
