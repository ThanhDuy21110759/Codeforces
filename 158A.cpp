#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n, k; cin >> n >> k;
	vector <int> arr;
	for (int i = 0; i < n; i++){
		int x; cin >> x;
		arr.push_back(x);
	}
	int cnt = 0;
	for (int i = 0; i < n; i++){
		if (arr[i] >= arr[k-1] && arr[i] > 0) cnt++;
	}
	cout << cnt;
}
