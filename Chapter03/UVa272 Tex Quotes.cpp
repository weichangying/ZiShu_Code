// UVa272 Tex Quotes
// Wei Changying
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	char c;
	bool flag = true;  // 左右标志，左是 true，右是 false 
	while((c = getchar()) != EOF) {
		if(c == '"') {
			if(flag) cout << "``";
			else cout << "''";
			flag = !flag;
		}else cout << c;
	}

	return 0;
}

