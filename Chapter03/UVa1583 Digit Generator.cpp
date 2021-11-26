// UVa1583 Digit Generator
// Wei Changying
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int ans[N];

int main() {

	int T;
	cin >> T;
	// ‘§¥¶¿Ì£¨±‹√‚≥¨ ± 
	for(int i = 1; i < N; i++) {
		int s = i, t = i;
		while(t) {
			s += t % 10;
			t /= 10;
		}
		if(ans[s] == 0 || i < ans[s]) ans[s] = i;
	}
	
	while(T--) {
		int n;
		cin >> n;
		cout << ans[n] << endl;
	}
	
	return 0;
}
/*
Input:
3
216
121
2005
Output:
198
0
1979
*/
