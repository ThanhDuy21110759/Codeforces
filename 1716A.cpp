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
	int t = 1; cin >> t;
	while (t--){
		int n; cin >> n;
		//solve
		if (n % 3 == 0) cout << n / 3 << endl; //12 18 30
		else if (n % 3 == 1) cout << max(2, n / 3 + 1) << endl; else cout << n / 3 + 1 << endl;
		//								// 7 = 3 2 2						// 17 = 3 3 3 3 3 2
	}
	return 0;
}





