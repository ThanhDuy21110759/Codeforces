#include <iostream>
using namespace std;
typedef long long ll;
int solve(ll n){
	if (n == 0) return 0;
	int count = 0;
	while (n > 0){
		if (n % 10 == 4 && n % 10 == 7){
			count++;
		}
		n = n / 10;
	}
	return count;
}
int main(){
	ll n; cin >> n;
	if (solve(n) ==4 || solve(n) == 7) cout << "YES"; else cout << "NO";
	return 0;
}
