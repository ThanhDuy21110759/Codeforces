#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <set>
#include <map>
#define MOD 1000000007
using namespace std;
typedef long long ll;
typedef vector <ll> vll;
typedef set <ll> sll;
typedef multiset <ll> msll;
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	ll n, k; cin >> n >> k;
	vll arr;
	ll res = 0;
	for (int i = 0; i < n; i++){
		int x; cin >> x;
		if (x <= k) res += 1; else res += 2;
	}
	cout << res;
	return 0;
}





