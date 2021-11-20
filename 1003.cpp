#include <bits/stdc++.h>

using namespace std;

long long int s, n;

int main() {
	cin >> n;
	
	for (int i = 1; i <= n; i++) s += i;
	
	cout << s;
	
	return 0;
}
