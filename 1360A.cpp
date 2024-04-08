#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	while (t--){
		int a, b; cin >> a >> b;
		ll s = max(max(a, b), min(a, b) * 2);
		cout << s * s <<"\n";
	}
	return 0;
}
