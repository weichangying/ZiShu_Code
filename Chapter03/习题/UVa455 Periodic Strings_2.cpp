// UVa455 Periodic Strings
// Wei Changying
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int T;
	cin >> T;
	while(T--) {
		string s;
		cin >> s;
		int n = s.size();
		int k;
		for(k = 1; ; k++) {
			bool ok = true;
			for(int i = 0; i < n; i++) {  // 环形串求解 
				if(s[i] != s[(i+k)%n]) {
					ok = false;
					break;
				}
			}
			if(ok) break;
		}
		cout << k << endl;
		if(T) cout << endl;
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
