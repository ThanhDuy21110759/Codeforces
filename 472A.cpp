//472A
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
	for (int i = 2; i * i <= n; ++i){
		if (n % i == 0) return false;
	}
	return true;
}
int main(){
	ios_base::sync_with_stdio;
	int n; cin >> n;
	for (int i = 2; i < n; i++){
		if (!isPrime(i)){
			if (!isPrime(n - i)){
				cout << i <<" "<< n - i;
				return 0;
			}
		}
	}
}
