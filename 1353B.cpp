#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;
void swap(int & a, int &b){
	int tmp = a;
	a = b;
	b = tmp;
}
int main(){
	int t; cin >> t;
	vector <int> a(0), b(0);
	for (int i = 1; i <= t; i++){
		int n, k; cin >> n >> k;
		int x = 0;
		for (int j = 1; j <= n; j++) {
			cin >> x;
			a.push_back(x);
		}
		for (int j = 1; j <= n; j++){
			cin >> x;
			b.push_back(x);
		}
		//solve
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		int res = 0;
		for (int j = 0; j < a.size(); j++){
			if (j < k){
				if (a[j] < b[b.size() - j - 1]) res += b[b.size() - j - 1]; 
					else res += a[j];
			} else res += a[j];
		}
		a.clear(); b.clear();
		cout << res <<" \n";
	}
}
