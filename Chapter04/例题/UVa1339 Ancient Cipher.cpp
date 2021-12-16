/*************************************
* ��Ŀ��UVa1339 Ancient Cipher
* ���ߣ�Wei Changying
* ���䣺weichangying_wcy@163.com
*************************************/

#include <bits/stdc++.h>
using namespace std;
/*
����: JWPUDJSTVP
J����2�Σ�P����2�Σ�W����1�Σ�U����1�Σ�V����1�Σ�D����1�Σ�S����1��

����: VICTORIOUS
O����2�Σ�I����2�Σ�V����1�Σ�C����1�Σ�T����1�Σ�R����1�Σ�S����1��

����: HAHA
H����2�Σ�A����2��

����: HEHE
H����2�Σ�E����2��

Ҳ����˵���������ĸ�������к󣬴�С�������ĸ��Ӧ���ִ���һ������˵������ͨ��
ĳ��ӳ���ϵ�õ�(����Ķ�Ӧ��ָ�� i С����ĸ�͵� i С����ĸ�Ƚ�) 
*/
int main() {
	
	string s1, s2;
	while(cin >> s1 >> s2) {
		int cnt1[30] = {0}, cnt2[30] = {0};
		for(int i = 0; i < s1.size(); i++) {
			cnt1[s1[i] - 'A']++;
			cnt2[s2[i] - 'A']++;
		}
		sort(cnt1, cnt1 + 26);
		sort(cnt2, cnt2 + 26);
		bool ok = true;
		for(int i = 0; i < 26; i++) {
			if(cnt1[i] != cnt2[i]) {  // �� i С����ĸ���ֵ����ֲ�һ�� 
				ok = false;
				break;
			}
		}
		if(ok) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}
/*
Input:
JWPUDJSTVP
VICTORIOUS
MAMA
ROME
HAHA
HEHE
AAA
AAA
NEERCISTHEBEST
SECRETMESSAGES

Output:
YES
NO
YES
YES
NO
*/
