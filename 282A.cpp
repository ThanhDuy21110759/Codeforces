#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, x(0); cin >>n;
	string s = "";
	int res = 0;
	while (n--){
		cin >> s;
		if (s[1] == '+'){
			res++;
		} else
		if (s[1] == '-'2){
			res--;
		}
		s = "";
	}
	cout << res;
	return 0;
}
