// UVa340 Master-Mind Hints
// Wei Changying
#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
int a[N], b[N];

int main() {

	int n, Case = 0;
	while((scanf("%d", &n) == 1) && n) {
		printf("Game %d:\n", ++Case);
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		while(true) {
			int A = 0, B = 0;  // 相同的数量，都出现但是位置不一样
			for(int i = 0; i < n; i++) {
				cin >> b[i];
				if(a[i] == b[i]) A++;
			} 
			if(b[0] == 0) break;
			for(int d = 1; d <= 9; d++) {
				int c1 = 0, c2 = 0;  // 每个数字在 a 和 b 出现的次数 
				for(int i = 0; i < n; i++) {
					if(d == a[i]) c1++; 
					if(d == b[i]) c2++; 
				}
				if(c1 < c2) B += c1;
				else B += c2;
			}
			printf("    (%d,%d)\n", A, B - A);
		}
	}
	
	return 0;
}
/*
Input:
4
1 3 5 5
1 1 2 3
4 3 3 5
6 5 5 1
6 1 3 5
1 3 5 5
0 0 0 0
10
1 2 2 2 4 5 6 6 6 9
1 2 3 4 5 6 7 8 9 1
1 1 2 2 3 3 4 4 5 5
1 2 1 3 1 5 1 6 1 9
1 2 2 5 5 5 6 6 6 7
0 0 0 0 0 0 0 0 0 0
0
Output:
Game 1:
	(1,1)
	(2,0)
	(1,2)
	(1,2)
	(4,0)
Game 2:
	(2,4)
	(3,2)
	(5,0)
	(7,0)
*/
