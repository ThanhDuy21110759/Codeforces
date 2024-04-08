#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main(){
	int t; cin >> t;
	while (t--){
		int a, b; cin >> a >> b;
		int res = abs(a - b);
		if (a < b){
			if (res % 2) cout << 1; else cout << 2;
		} else if (a > b){
			if (res % 2) cout << 2; else cout << 1;
		} else cout << 0;
	}
	return 0;
}
