#include <bits/stdc++.h>

using namespace std;

vector<int> v, res;
int flag = 0;

int main() {
	for (int i = 0; i < 9; i++) {
		int t;
		cin >> t;
		v.push_back(t);
	}
	
	for (int i = 0; i < 9; i++) {
		if (flag) break;
		for (int j = i + 1; j < 9; j++) {
			int s = 0;
			for (int k = 0; k < 9; k++) if (k != i && k != j) s += v[k];
			if (s != 100) continue;
			for (int k = 0; k < 9; k++) if (k != i && k != j) res.push_back(v[k]);
			flag = 1;
			break;
		}
	}
	
	sort(res.begin(), res.end());
	for (auto i : res) cout << i << ' ';
	
	return 0;
}
