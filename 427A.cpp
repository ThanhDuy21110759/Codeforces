#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int res = 0, cnt = 0;
	for (int i = 0; i < n; i++){
		int x; cin >> x;
		if (x >= 1){
			res += x;
		} else {
			res--;
			if (res < 0) {
				cnt++;
				res = 0;
			}
		}
	}
	cout << cnt;
	return 0;
}
