#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		vector <int> arr;
		for (int i = 0; i < n; i++){
			int x; cin >> x;
			arr.push_back(x);
		}
		//solve
		int tmp[n] = {0};
		for (int i = 0; i < n - 2; i++){
			tmp[i] = max(0, max(arr[i], arr[i + 2]) - arr[i + 1] + 1);
		}
		int res = 0;
		if ((n - 2) % 2){
			for (int i = 0; i < n - 2; i += 2) res += tmp[i];
			cout << res << endl;
		} else {
			int tam = 0;
			for (int i = 1; i < n - 2; i += 2) tam += tmp[i];
			res = tam;
			for (int i = 0; i < n - 2; i += 2){
				tam += tmp[i] - tmp[i + 1];
				res = min(res, tam);
			}
			cout << res <<endl;
		}
	}
	return 0;
}
