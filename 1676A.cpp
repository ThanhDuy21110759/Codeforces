#include <bits/stdc++.h>
#include <vector>
#include <string.h>
using namespace std;
int main(){
	int t; cin >> t;
	for (int i = 1; i <= t; i++){
		string s; cin >> s;
		int s1 = 0, s2 = 0;
		for (int j = 0; j < 3; j++) {
			s1 += int(char(s[j]) - 48);
		}
		
		for (int j = s.length() - 1; j >= s.length() - 3; j--) {
			s2 += int(char(s[j]) - 48);
		}
		if (s1 == s2) cout <<"YES"<<"\n"; else cout <<"NO"<<"\n";
	}
	return 0;
}
