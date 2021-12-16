/*************************************
* 题目：UVa The Dole Queue
* 作者：Wei Changying
* 邮箱：weichangying_wcy@163.com
*************************************/

#include <bits/stdc++.h>
using namespace std;

bool vis[30];  // 可用标记 
int n, k, m;  // 有 n 个人， A 逆时针数第 k 个、B 顺时针第 m 个离开 

int solve(int p, int d, int cnt) {
	while(cnt--) {
		do {
			p = (p + d + n - 1) % n + 1;
		}while(!vis[p]);  // 当 p 不可用了 
	}
	return p;
}

int main() {
	
	while(scanf("%d%d%d", &n, &k, &m) == 3 && n != 0) {
		memset(vis, true, sizeof vis);  // 初始化为都可用 
		int a = n, b = 1;  // A 初始位置，B 初始位置
		int left = n;  // 还剩下的人数 
		// 每一轮，A 逆时针数第 k 个，B 顺时针第 m 个，离开
		while(left > 0) {
			// 注意：这一轮 A 选的不影响 B 数人，而且选完要判断一下是不是选中了同一个
			a = solve(a, 1, k);  // A 选到的人 
			b = solve(b, -1, m);  // B 选到的人 
			vis[a] = vis[b] = false;  // a 和 b 标记为不可用 
			printf("%3d", a);
			left--;  // 剩下人数减 1 
			if(a != b) {
				printf("%3d", b);
				left--;  // 剩下人数减 1 
			}
			if(left > 0) printf(",");  // 还没有结束，输出逗号
		}	
		printf("\n");	 
	}
	
	return 0;
}
/*
Input:
10 4 3
0 0 0

Output:
  4  8,  9  5,  3  1,  2  6,  10,  7
*/
