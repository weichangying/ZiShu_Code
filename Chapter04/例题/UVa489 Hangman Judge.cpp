/*************************************
* ��Ŀ��UVa489 Hangman Judge
* ���ߣ�Wei Changying
* ���䣺weichangying_wcy@163.com
*************************************/

#include <bits/stdc++.h>
using namespace std;

string s, s2;  // ���ַ�������Ҳµ��ַ��� 
int cnt, chance;  // ��Ҫ�� cnt ����ĸ���� chance ֮����� 
bool win, lose;  // Ӯ����ı�� 

void guess(char c) {  // �ж� c �Ƿ��� s �г���
	bool ok = false;  // ���б�� 
	for(int i = 0; i < s.size(); i++) {  // ���� s
		if(c == s[i]) {  // ��� c ����
			s[i] = ' ';  // ��Ѹ��ַ���Ϊ�ո�
			ok = true;  // ��ǲ����� 
			cnt--;  // Ҫ�µ���ĸ�� 1 
		}
	}
	if(!ok) chance--;  // ���û�г��֣������ 1
	if(chance == 0) lose = true;  // ���û�л����ˣ�����䣨���жϻ����ǲ��������ˣ� 
	if(cnt == 0) win = true;  // ��������ˣ����Ӯ
}

int main() {
	
	int Round;
	while(cin >> Round && Round != -1) {
		cin >> s >> s2;
		cnt = s.size();  //  ��Ҫ�� cnt ����ĸ  
		chance = 7;  // �� 7 �ξͻ��䣨�� 6 �δ�Ļ��ᣩ
		win = lose = false;
		for(int i = 0; i < s2.size(); i++) {  // ���� s2
			// �� s2[i] �Ƿ��� s �г���
			guess(s2[i]);
			if(win || lose) break;  // ���Ӯ�˻����˾Ϳ����˳� 
		}  
		
		cout << "Round " << Round << endl;
		// �ж���Ӯ 
		if(win) cout << "You win.\n";
		else if(lose) cout << "You lose.\n";
		else cout << "You chickened out.\n";
	}

	return 0;
}
/*
Input:
1
cheese
chese
2
cheese
abcdefg
3
cheese
abcdefgij
-1

Output:
Round 1
You win.
Round 2
You chickened out.
Round 3
You lose.
*/
