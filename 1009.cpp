#include <bits/stdc++.h>

using namespace std;

int n, cnt;

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			for (int k = j; k <= n; k++) {
				if (i <= j && j <= k && i + j > k && i + j + k == n) cnt++;
			}
		}
	}
	
	cout << cnt;
	
	return 0;
}
