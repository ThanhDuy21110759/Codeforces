#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main(){
	string s; cin >> s;
	int count = 0;
	for (int i = 0; i < s.length(); i++){
		for (int j = 0; j < i; j++){
			if (s[j] == s[i]) {
			    count++;
			    s[j] = ' ';
			}
		}
	}
	if ((s.length() - count) % 2 == 0) cout << "CHAT WITH HER!"; else cout << "IGNORE HIM!";
	return 0;
}
