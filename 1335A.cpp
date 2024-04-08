#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main(){
	int t; cin >> t;
	for (int i = 1; i <=t ; i++){
		int n; cin >> n;
		if (n % 2) cout << n / 2 << "\n"; else cout << n / 2 - 1 <<"\n";		
	}
	return 0;
}
