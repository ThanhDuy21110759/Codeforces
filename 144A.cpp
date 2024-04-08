#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main(){
	int n; cin >> n;
	vector <int> arr;
	int Min = INT_MAX, pos_min = 0;
	int Max = INT_MIN, pos_max = 0;
	for (int i = 0; i < n; i++){
		int x; cin >> x;
		if (x <= Min) {
			if (x < Min){
				Min = x;
				pos_min = i;
			} else if (pos_min < i) pos_min = i;
		}
		if (x >= Max) {
			if (x > Max){
				Max = x;
				pos_max = i;
			} else if (pos_max > i) pos_max = i; 
		}
	}
	if (pos_min > pos_max) cout << abs(n - pos_min - 1) + abs(pos_max - 0); else
	cout << abs(n - pos_min - 1) + abs(pos_max - 0) - 1;
	return 0;
}
