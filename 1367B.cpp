#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void swap(int & a, int & b){
	int tmp = a;
	a = b;
	b = tmp;
}
int main(){
	int n; cin >> n;
	vector <int> arr;
	for (int i = 1; i <= n; i++){
		int cnt; cin >> cnt;
		int even = 0; int odd = 0;
		for (int j = 0; j < cnt; j++){
			int x; cin >> x;
			if (j % 2 == 0){
				if (x % 2 != 0) odd++; 
			} else {
				if (x % 2 == 0) even++; 
			}
		}
		int res = 0;
		if (even == odd) res = (even + odd) / 2; else res = -1;
		cout << res << endl;	
		arr.clear();
	}
	return 0;
}
