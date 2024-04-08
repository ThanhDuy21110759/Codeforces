#include <bits/stdc++.h>
#include <set>
using namespace std;
int solve(int n){
	set <int> a;
	int count = 0;
	while (n > 0){
		a.insert(n % 10);
		count++;
		n /= 10;
	}
	if (a.size() == count) return 1; else return 0;
}
int main(){
	int n; cin >> n;
	set <int> s;
	bool kt = false;
	while (!kt){
		n++;
		if (solve(n) == 1){
			kt = true;
			break;
		}
	}
	if (kt == true) cout << n; 
}

