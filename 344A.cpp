#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	vector <string> v;
	for (int i = 0; i < n; i++){
		string s; cin >> s;
		v.push_back(s);
	}
	int res = 1; 
	string tmp = v[0];
	for (int i = 1; i < n; i++){
		if (v[i] != tmp){
			res++;
			tmp = v[i];
		} 
	}
	cout << res;
	return 0;
}
