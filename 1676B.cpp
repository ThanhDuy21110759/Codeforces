#include <bits/stdc++.h>
#include <math.h>
#include <vector>
using namespace std;
int main(){
	int t; cin >> t;
	vector <int> arr(0);
	for (int i = 1; i <= t; i++){
		int n; cin >> n;
		int min = INT_MAX;
		for (int j = 0; j < n; j++) {
			int x; cin >> x;
			arr.push_back(x);
			if (x < min) min = x;
		}
		int res = 0;
		for (int j = 0; j < arr.size(); j++) res += abs(arr[j] - min);
		cout << res << "\n";
		arr.clear();
	}
	return 0;
}
