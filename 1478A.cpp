// How the f*ck is this Question ??? ==>> only win [with i-th person]
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int t; cin >> t;
	// #1
	for (int i = 1; i <= t; i++){
		int n; cin >> n;
		int m, ms = 1;
		cin >> m;
		for (int j = 1; j < n; j++){
			int x; cin >> x;
			if (x == m) ms++;
			if (x < m){
				m = x;
				ms = 1;
			}
		}
		cout << n - ms << endl;
	}
	// #2
	for (int i = 1; i <= t; i++){
		int n; cin >> n;
		vector <int> arr;
		int min = INT_MAX;
		for (int j = 1; j <= n; j++){
			int x; cin >> x;
			if (x < min) min = x;
			arr.push_back(x);
		}
		sort(arr.begin(), arr.end());
		int cnt = 0;
		for (int j = 0; j < n; j++){
			if (arr[j] > min) cnt++;
		}
		cout << cnt <<"\n";
	}
	return 0;
}
