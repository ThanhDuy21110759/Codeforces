#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, k; cin >> n >> k;
	int count = 0;
	while (count != k){
		if (n % 10 == 0){
			n /= 10;
		} else n--;
		count++;
	}
	cout << n;
}
