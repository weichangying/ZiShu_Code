/***********************************
* 题目：UVa227 Puzzle
* 作者：Wei Changying
* 邮箱：weichangying_wcy@163.com 
************************************/
#include <bits/stdc++.h>
using namespace std;

string s[5];

int main() {
	
	bool End = false;  // 结束标志 
	for(int Case = 1; ; Case++) { 
		for(int i = 0; i < 5; i++) {
			getline(cin, s[i]);
			if(i == 0 && s[i] == "Z") {
				End = true;
				break;
			}
		}
		if(End) break;
		if(Case > 1) cout << endl;  // 输出空行 
		int x, y;  // 空格位置
		for(int i = 0; i < 5; i++) {  // 找空格位置 
			for(int j = 0; j < 5; j++) {
				if(s[i][j] == ' ') {
					x = i, y = j;
					break;
				}
			}
		}
		bool ok = true;  // 操作合法标志 
		char c;
		while(cin >> c && c != '0') {
			if(!ok) continue;
			if(c == 'A') {  // 空格和上边的格子交换 
				int nx = x - 1;
				if(nx < 0) {
					ok = false;
					continue;
				}
				swap(s[x][y], s[nx][y]);
				x = nx;
			}else if(c == 'B') {  // 空格和下边的格子交换
				int nx = x + 1;
				if(nx > 4) {
					ok = false;
					continue;
				}
				swap(s[x][y], s[nx][y]);
				x = nx;
			}else if(c == 'L') {  // 空格和左边的格子交换
				int ny = y - 1;
				if(ny < 0) {
					ok = false;
					continue;
				}
				swap(s[x][y], s[x][ny]);
				y = ny;
			}else if(c == 'R') {  // 空格和右边的格子交换
				int ny = y + 1;
				if(ny > 4) {
					ok = false;
					continue;
				}
				swap(s[x][y], s[x][ny]);
				y = ny;
			}
		}
		getchar();  // 吸收 0 后面的换行符 
		
		cout << "Puzzle #" << Case << ":\n";
		if(!ok) cout << "This puzzle has no final configuration.\n";
		else {
			for(int i = 0; i < 5; i++) {
				for(int j = 0; j < 5; j++) {
					cout << s[i][j];
					if(j < 4) cout << " ";  // 行末无空格 
				}
				cout << endl;
			}
		}
	}

	return 0;
}
/*
Input:
TRGSJ
XDOKI
M VLN
WPABE
UQHCF
ARRBBL0
ABCDE
FGHIJ
KLMNO
PQRS 
TUVWX
AAA
LLLL0
ABCDE
FGHIJ
KLMNO
PQRS 
TUVWX
AAAAABBRRRLL0
Z

Output:
Puzzle #1:
T R G S J
X O K L I
M D V B N
W P   A E
U Q H C F

Puzzle #2:
  A B C D
F G H I E
K L M N J
P Q R S O
T U V W X

Puzzle #3:
This puzzle has no final configuration.
*/
