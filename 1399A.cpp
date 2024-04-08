#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n; cin >> n;
	vector <int> arr;
	for (int i = 1; i <= n; i++){
		int cnt = 0; cin >> cnt;
		for (int j = 1; j <= cnt; j++){
			int x; cin >> x;
			arr.push_back(x);
		}
		sort(arr.begin(), arr.end());
		int count = 0;
		for (int j = 0; j < arr.size() - 1; j++){
			if (abs(arr[j] - arr[j+1]) <= 1 && abs(arr[j] - arr[j+1]) >= 0) count++;
		}
		if (arr.size() - count == 1) cout << "YES" << endl; else cout << "NO" << endl;	
		arr.clear();	
	}
	return 0;
}
