#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	while (t--){
		ll a, b; cin >> a >> b;
		if (a % b == 0 || a == b) cout << 0 <<endl; else {
			if (a < b) cout << b - a << endl; else {
				int mod = a % b;
				cout << b - mod << endl;
			}
		}
	}
	return 0;
}
