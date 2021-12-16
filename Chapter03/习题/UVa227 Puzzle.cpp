/***********************************
* ��Ŀ��UVa227 Puzzle
* ���ߣ�Wei Changying
* ���䣺weichangying_wcy@163.com 
************************************/
#include <bits/stdc++.h>
using namespace std;

string s[5];

int main() {
	
	bool End = false;  // ������־ 
	for(int Case = 1; ; Case++) { 
		for(int i = 0; i < 5; i++) {
			getline(cin, s[i]);
			if(i == 0 && s[i] == "Z") {
				End = true;
				break;
			}
		}
		if(End) break;
		if(Case > 1) cout << endl;  // ������� 
		int x, y;  // �ո�λ��
		for(int i = 0; i < 5; i++) {  // �ҿո�λ�� 
			for(int j = 0; j < 5; j++) {
				if(s[i][j] == ' ') {
					x = i, y = j;
					break;
				}
			}
		}
		bool ok = true;  // �����Ϸ���־ 
		char c;
		while(cin >> c && c != '0') {
			if(!ok) continue;
			if(c == 'A') {  // �ո���ϱߵĸ��ӽ��� 
				int nx = x - 1;
				if(nx < 0) {
					ok = false;
					continue;
				}
				swap(s[x][y], s[nx][y]);
				x = nx;
			}else if(c == 'B') {  // �ո���±ߵĸ��ӽ���
				int nx = x + 1;
				if(nx > 4) {
					ok = false;
					continue;
				}
				swap(s[x][y], s[nx][y]);
				x = nx;
			}else if(c == 'L') {  // �ո����ߵĸ��ӽ���
				int ny = y - 1;
				if(ny < 0) {
					ok = false;
					continue;
				}
				swap(s[x][y], s[x][ny]);
				y = ny;
			}else if(c == 'R') {  // �ո���ұߵĸ��ӽ���
				int ny = y + 1;
				if(ny > 4) {
					ok = false;
					continue;
				}
				swap(s[x][y], s[x][ny]);
				y = ny;
			}
		}
		getchar();  // ���� 0 ����Ļ��з� 
		
		cout << "Puzzle #" << Case << ":\n";
		if(!ok) cout << "This puzzle has no final configuration.\n";
		else {
			for(int i = 0; i < 5; i++) {
				for(int j = 0; j < 5; j++) {
					cout << s[i][j];
					if(j < 4) cout << " ";  // ��ĩ�޿ո� 
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
