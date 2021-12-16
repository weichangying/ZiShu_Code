// UVa1584 Circular Sequence
// Wei Changying
#include <bits/stdc++.h>
using namespace std;

// s 从 p 起点比 q 起点小，返回 true，否则返回 false 
bool Less(string s, int p, int q) {
	int n = s.size();
	for(int i = 0; i < n; i++) {
		if(s[(p+i)%n] != s[(q+i)%n]) return s[(p+i)%n] < s[(q+i)%n];
	}
	return false;  // 相等的情况 
}

int main() {
	
	int T;
	cin >> T;
	while(T--) {
		string s;
		cin >> s;
		int n = s.size(), ans = 0;  // 字符串大小，最小串起点 
		for(int i = 0; i < n; i++) {
			if(Less(s, i, ans)) ans = i;
		}
		for(int i = 0; i < n; i++) {
			cout << s[(i+ans)%n];
		}
		cout << endl;
	}

	return 0;
}
/*
Input:
2
CGAGTCAGCT
CTCC

Output:
AGCTCGAGTC
CCCT
*/
