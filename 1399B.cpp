#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		ll x, Min_1 = INT_MAX, Min_2 = INT_MAX; 
		vector <ll> a(0), b(0);
		for (int i = 0; i < n; i++){
			cin >> x;
			a.push_back(x);
			if (x < Min_1) Min_1 = x;
		}
		for (int i = 0; i < n; i++){
			cin >> x;
			b.push_back(x);
			if (x < Min_2) Min_2 = x;
		}
		ll res = 0;
		for (int i = 0; i < n; i++){
			res += max(a[i] - Min_1, b[i] - Min_2);
		}
		cout << res << endl;
	}
	return 0;
}

