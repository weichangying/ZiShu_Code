/*************************************
* ��Ŀ��UVa The Dole Queue
* ���ߣ�Wei Changying
* ���䣺weichangying_wcy@163.com
*************************************/

#include <bits/stdc++.h>
using namespace std;

bool vis[30];  // ���ñ�� 
int n, k, m;  // �� n ���ˣ� A ��ʱ������ k ����B ˳ʱ��� m ���뿪 

int solve(int p, int d, int cnt) {
	while(cnt--) {
		do {
			p = (p + d + n - 1) % n + 1;
		}while(!vis[p]);  // �� p �������� 
	}
	return p;
}

int main() {
	
	while(scanf("%d%d%d", &n, &k, &m) == 3 && n != 0) {
		memset(vis, true, sizeof vis);  // ��ʼ��Ϊ������ 
		int a = n, b = 1;  // A ��ʼλ�ã�B ��ʼλ��
		int left = n;  // ��ʣ�µ����� 
		// ÿһ�֣�A ��ʱ������ k ����B ˳ʱ��� m �����뿪
		while(left > 0) {
			// ע�⣺��һ�� A ѡ�Ĳ�Ӱ�� B ���ˣ�����ѡ��Ҫ�ж�һ���ǲ���ѡ����ͬһ��
			a = solve(a, 1, k);  // A ѡ������ 
			b = solve(b, -1, m);  // B ѡ������ 
			vis[a] = vis[b] = false;  // a �� b ���Ϊ������ 
			printf("%3d", a);
			left--;  // ʣ�������� 1 
			if(a != b) {
				printf("%3d", b);
				left--;  // ʣ�������� 1 
			}
			if(left > 0) printf(",");  // ��û�н������������
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
