#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
	int n; cin >> n;
	vector <int> arr(n);
	for (int i = 1; i <= n; i++){
		int x; cin >> x;
		arr[x] = i;
	}
	for (int i = 1; i <= arr.size(); i++) cout << arr[i] <<" ";
	return 0;
}
