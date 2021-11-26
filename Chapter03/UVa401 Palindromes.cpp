// UVa401 Palindromes
// Wei Changying
#include <bits/stdc++.h>
using namespace std;

string mirro = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";  // �����ַ� 

bool pal(string s) {
	int n = s.size();
	for(int i = 0; i < n; i++) {
		if(s[i] != s[n-1-i]) return false;
	}
	return true;
}

bool mir(string s) {
	int n = s.size();
	for(int i = 0; i < n; i++) {
		if(isalpha(s[i])) {
			if(mirro[s[i]-'A'] != s[n-1-i]) return false;
		}else if(mirro[s[i]-'0'+25] != s[n-1-i]) return false;  // 0 ������֣����� +25 
	}
	return true;
}

int main() {
	
	string s;
	while(cin >> s) {
		bool f1 = pal(s), f2 = mir(s);
		if(!f1 && !f2 ) cout << s << " -- is not a palindrome.\n\n";  // ������ 
		else if(f1 && !f2) cout << s << " -- is a regular palindrome.\n\n";  // ���ģ��Ǿ���
		else if(!f1 && f2) cout << s << " -- is a mirrored string.\n\n";  // �ǻ��ģ�����
		else cout << s << " -- is a mirrored palindrome.\n\n";  // ���� 
	}

	return 0;
}
/*
Input:
NOTAPALINDROME
ISAPALINILAPASI
2A3MEAS
ATOYOTA

Output:
NOTAPALINDROME -- is not a palindrome.

ISAPALINILAPASI -- is a regular palindrome.

2A3MEAS -- is a mirrored string.

ATOYOTA -- is a mirrored palindrome.

*/
