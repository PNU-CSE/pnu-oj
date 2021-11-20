#include <bits/stdc++.h>

using namespace std;

int n, flag;
string s;

int main() {
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		stack<char> st;
		flag = 0;
		cin >> s;
		for (int j = 0; j < s.length(); j++) {
			if (s[j] == '(') st.push(1);
			else {
				if (st.size() == 0) flag = 1;
				else st.pop();
			}
		}
		if (!flag && st.size() == 0) cout << "YES\n";
		else cout << "NO\n";
	} 
	
	return 0;
}
