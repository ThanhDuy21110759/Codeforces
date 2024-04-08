#include <bits/stdc++.h>
#include <iostream>
using namespace std;
char solve(char a, char b){
	if (a == '1' && b == '1') return '0';
	if ((a == '0' && b == '1') || (b == '0' && a == '1')) return '1';
	return '0';
}
int main(){
	string s1, s2; cin >> s1 >> s2;
	string res = "";
	for (int i = 0; i < s1.length(); i++){
		res += solve(s1[i], s2[i]);
	}
	cout << res;
}
