/*************************************
* 题目：UVa1339 Ancient Cipher
* 作者：Wei Changying
* 邮箱：weichangying_wcy@163.com
*************************************/

#include <bits/stdc++.h>
using namespace std;
/*
密文: JWPUDJSTVP
J出现2次，P出现2次，W出现1次，U出现1次，V出现1次，D出现1次，S出现1次

明文: VICTORIOUS
O出现2次，I出现2次，V出现1次，C出现1次，T出现1次，R出现1次，S出现1次

密文: HAHA
H出现2次，A出现2次

明文: HEHE
H出现2次，E出现2次

也就是说，如果将字母升序排列后，从小到大的字母对应出现次数一样，就说明可以通过
某种映射关系得到(这里的对应是指第 i 小的字母和第 i 小的字母比较) 
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
			if(cnt1[i] != cnt2[i]) {  // 第 i 小的字母出现的数字不一样 
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
