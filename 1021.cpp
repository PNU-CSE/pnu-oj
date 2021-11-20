#include <bits/stdc++.h>

using namespace std;

int n, cnt;
stack<int> s;

int main() {
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		string cmd;
		cin >> cmd;
		if (cmd == "push") {
			int t;
			cin >> t;
			s.push(t);
		}
		if (cmd == "pop") {
			if (s.size() == 0) cout << -1 << '\n';
			else {
				cout << s.top() << '\n';
				s.pop();	
			}
		}
		if (cmd == "top") {
			if (s.size() == 0) cout << -1 << '\n';
			else cout << s.top() << '\n'; 
		}
		if (cmd == "empty") {
			if (s.size() == 0) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		if (cmd == "size") cout << s.size() << '\n';
	}
	
	return 0;
}
