// UVa1586 Molar mass
// Wei Changying
#include <bits/stdc++.h>
using namespace std;

int cnt[256];

int main() {

	int T;
	cin >> T;
	while(T--) {
		string s;
		cin >> s;
		memset(cnt, 0, sizeof cnt);  // 要记得初始化 
		for(int i = 0; i < s.size(); i++) {
			if(isalpha(s[i])) {
				int j = i + 1, x = 0;
				while(j < s.size() && isdigit(s[j])) {
					x = x * 10 + (s[j++] - '0');
				}
				if(x > 1) cnt[s[i]] += x;
				else cnt[s[i]]++;
				i = j - 1;  // 回退一位，因为待会 i 要加 1 
			}
		}
		double ans = 
		cnt['C'] * 12.01 + cnt['H'] * 1.008 + cnt['O'] * 16.00 + cnt['N'] * 14.01;
		printf("%.3f\n", ans);
	}
	
	return 0;
}
/*
Input:
4
C
C6H5OH
NH2CH2COOH
C12H22O11

Output:
12.010
94.108
75.070
342.296
*/
