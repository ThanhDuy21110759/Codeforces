#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int res = -1;
	for (int i = 1; i <= n; i++){
		int x; cin >> x;
		if (x == 1) {
			res = 0;
			break;
		} 
	}
	if (res == 0) cout <<"HARD"; else cout << "EASY";
}
