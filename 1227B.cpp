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
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		ll arr[n];
		for (int i = 1; i <= n; i++) arr[i] = i;
		//solve
		int kt = 0;
		for (int i = 1; i <= n; i++){
			int x; cin >> x;
			if (x < i) kt = 1; else swap(arr[x], arr[i]);
		}
		//out
		if (kt == 1) cout << -1 << "\n"; else {
			for (int i = 1; i <= n; i++) cout << arr[i] <<" ";
		}
		cout << endl;
	}
	return 0;
}





