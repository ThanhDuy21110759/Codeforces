#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
using namespace std;
int main(){
	string s, str; cin >> s >> str;
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	transform(str.begin(), str.end(), str.begin(), ::tolower);
	cout << strcmp(s.c_str(), str.c_str()) << endl;
	return 0;
}
