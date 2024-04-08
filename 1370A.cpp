#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int GCD(int a, int b){
	if (b == 0) return a; else GCD(b, a % b);
}
int main(){
	int t; cin >> t;
	for (int i = 1; i <= t; i++){
		int x = 0; cin >> x;
		int res = x / 2;
		if (res == 0) res = 1;
		cout << res << "\n";
	}
	return 0;
}
