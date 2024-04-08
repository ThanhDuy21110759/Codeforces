#include <bits/stdc++.h>
using namespace std;
int main(){
	int t, s; cin >> t;
	for (int i = 1; i <= t; i++){
		int x; cin >> x;
		s += x;
	}
	cout << double(s) / double(t);
}
