#include <bits/stdc++.h>
#include <set>
using namespace std;
int main(){
	set <int> arr;
	for (int i = 0; i < 4; i++){
		int x; cin >> x;
		arr.insert(x);
	}
	cout << 4 - arr.size();
	return 0;
}
