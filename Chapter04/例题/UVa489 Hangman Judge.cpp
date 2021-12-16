/*************************************
* 题目：UVa489 Hangman Judge
* 作者：Wei Changying
* 邮箱：weichangying_wcy@163.com
*************************************/

#include <bits/stdc++.h>
using namespace std;

string s, s2;  // 答案字符串，玩家猜的字符串 
int cnt, chance;  // 还要猜 cnt 个字母，错 chance 之后会输 
bool win, lose;  // 赢、输的标记 

void guess(char c) {  // 判断 c 是否在 s 中出现
	bool ok = false;  // 猜中标记 
	for(int i = 0; i < s.size(); i++) {  // 遍历 s
		if(c == s[i]) {  // 如果 c 出现
			s[i] = ' ';  // 则把改字符改为空格
			ok = true;  // 标记猜中了 
			cnt--;  // 要猜的字母减 1 
		}
	}
	if(!ok) chance--;  // 如果没有出现，机会减 1
	if(chance == 0) lose = true;  // 如果没有机会了，玩家输（先判断机会是不是用完了） 
	if(cnt == 0) win = true;  // 如果猜完了，玩家赢
}

int main() {
	
	int Round;
	while(cin >> Round && Round != -1) {
		cin >> s >> s2;
		cnt = s.size();  //  需要猜 cnt 个字母  
		chance = 7;  // 错 7 次就会输（有 6 次错的机会）
		win = lose = false;
		for(int i = 0; i < s2.size(); i++) {  // 遍历 s2
			// 猜 s2[i] 是否在 s 中出现
			guess(s2[i]);
			if(win || lose) break;  // 玩家赢了或输了就可以退出 
		}  
		
		cout << "Round " << Round << endl;
		// 判断输赢 
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
