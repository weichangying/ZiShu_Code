// UVa1225 Digit Counting
// Wei Changying
#include <bits/stdc++.h>
using namespace std;

int cnt[20];

int main() {
	
	int T;
	cin >> T;
	while(T--) {
		int n;
		cin >> n;
		memset(cnt, 0, sizeof cnt);
		for(int i = 1; i <= n; i++) {
			int t = i;
			while(t) {
				cnt[t%10]++;
				t /= 10;
			}
		}
		for(int i = 0; i < 10; i++) {
			cout << cnt[i];
			if(i < 9) cout << " ";
		}
		cout << endl;
	}

	return 0;
}
/*
Input:
2
3
13

Output:
0 1 1 1 0 0 0 0 0 0
1 6 2 2 1 1 1 1 1 1
*/
