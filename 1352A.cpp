#include <bits/stdc++.h>
#include <math.h>
#include <set>
using namespace std;
void solve(int x){
	set <int> s;
	int cnt = 0;
	while (x > 0){
		if (x % 10) s.insert((x % 10) * pow(10, cnt));
		cnt++;
		x /= 10;
	}
	cout << cnt << endl;
	for (int c : s) cout << c <<" ";
	cout <<"\n";
}
int main(){
	int t; cin >> t;
	for (int i  = 0; i < t; i++){
		int x; cin >> x;
		solve(x);
	}
}
