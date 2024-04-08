//PROBLEM A (500 Point)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// O(x^2)
void solve1(ll x){
	ll res = 0;
	bool chk = false;
	for (int i = x - 1; i >= 1; i--){	// O(x)
		int tmp = 1;
		for (int j = 1; j <= i; j++) tmp *= j;	// O(x)
		res += tmp;
		if (res % x == 0) {
			cout << x - 1 <<"\n";
			chk = true;
			break;
		}
	}
	if (!chk) cout << -1 <<"\n";
}
// O(x)
void solve2(ll x){
	//Factorial of numbers => O(x)
	ll arr[10101] = {0};
	arr[0] = 1;
	for (int i = 1; i <= x - 1; i++){	// O(x)
		arr[i] = arr[i-1] * i;
	}
	//solve => O(x)
	ll res = 0;
	bool chk = false;
	for (int i = x - 1; i >= 1; i--){	//	O(x)
		res += arr[i];	//	O(1)
		if (res % x == 0){
			cout << x - 1 <<"\n";
			chk = true;
			break;
		}
	}
	if (!chk) cout << -1 <<"\n";
}
//	O(1)
void solve3(int n){
	cout << n - 1 <<"\n";
	// ==>  Value of Factorial luon co boi la x (voi moi so x cho truoc) 
}
int main(){
	ll n; cin >> n;
	while (n--){
		int x; cin >> x;
		solve3(x);	
	}
}
