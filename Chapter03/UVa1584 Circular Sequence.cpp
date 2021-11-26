// UVa1584 Circular Sequence
// Wei Changying
#include <bits/stdc++.h>
using namespace std;

// s �� p ���� q ���С������ true�����򷵻� false 
bool Less(string s, int p, int q) {
	int n = s.size();
	for(int i = 0; i < n; i++) {
		if(s[(p+i)%n] != s[(q+i)%n]) return s[(p+i)%n] < s[(q+i)%n];
	}
	return false;  // ��ȵ���� 
}

int main() {
	
	int T;
	cin >> T;
	while(T--) {
		string s;
		cin >> s;
		int n = s.size(), ans = 0;  // �ַ�����С����С����� 
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
