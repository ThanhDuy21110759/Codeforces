#include <bits/stdc++.h>
#include <math.h>
#include <vector>
using namespace std;
int main(){
	int t; cin >> t;
	vector <int> arr(0);
	for (int i = 1; i <= t; i++){
		int n; cin >> n;
		int avg = 0;
		for (int j = 0; j < n; j++) {
			int x; cin >> x;
			arr.push_back(x);
			avg += x;
		}
		sort(arr.begin(), arr.end());
		int count = 0;
		if (avg % n == 0){
			//Truong Hop toi uu nhat = chi chia bot tu so keo nhiu hon trung binh. Het :)))
			for (int j = 0; j < arr.size(); j++){
				if (arr[j] > avg / n) count ++;
			}
		} else {
			cout <<"-1"<<"\n";
			count = -1;
		}
		if (count != -1) cout << count <<"\n";
		arr.clear();
	}
	return 0;
}

