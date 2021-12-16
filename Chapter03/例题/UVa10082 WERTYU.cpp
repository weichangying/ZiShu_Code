// UVa10082 WERTYU
// Wei Changying
#include <bits/stdc++.h>
using namespace std;

string s = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

int main() {
	
	char c;
	while((c = getchar()) != EOF) {
		int t = s.find(c);
		if(t != string::npos) cout << s[t-1];  // ÆäËû·ûºÅ 
		else cout << c;	
	}
	
	return 0;
}
/*
Input:
O S, GOMR YPFSU/
Output:
I AM FINE TODAY.
*/
