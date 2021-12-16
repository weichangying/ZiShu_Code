// UVa455 Periodic Strings 
// Wei Changying
#include <bits/stdc++.h>
using namespace std;

string s;

bool check(int n, int k){
	for(int i = 0; i < n - k; i++) {
		if(s[i] != s[i+k]) return false;
	}
	return true;
}

int main() {

	int T;
	cin >> T;
	for(int Case = 1; Case <= T; Case++) {
		cin >> s;
		int n = s.size();
		int ans = n;  // 有可能最小周期是 n 
		for(int k = 1; k <= n / 2; k++) {  // 最小周期长度 
			if(n % k == 0 && check(n, k) && k < ans) {
				ans = k;
				break;
			}
		}
		cout << ans << endl;
		if(Case < T) cout << endl;
	}

	return 0;
}
/*
Input:
2
hahaha
abcabcabcabc
abcd

Output:
2
3
4
*/
