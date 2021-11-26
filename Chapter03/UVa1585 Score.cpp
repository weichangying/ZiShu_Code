// UVa1585 Score 
// Wei Changying
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int T;
	cin >> T;
	while(T--) {
		string s;
		cin >> s;
		int sum = 0, t = 0;
		for(int i = 0; i < s.size(); i++) {
			if(s[i] == 'X') t = 0;
			else if(s[i] == 'O') {
				t++;
				sum += t;
			}
		}
		cout << sum << endl;
	}

	return 0;
}
/*
Input:
5
OOXXOXXOOO
OOXXOOXXOO
OXOXOXOXOXOXOX
OOOOOOOOOO
OOOOXOOOOXOOOOX

Output:
10
9
7
55
30
*/
