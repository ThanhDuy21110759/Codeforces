//Watermelon
#include <iostream>
#include <math.h>
using namespace std;
int solve(int n){
	for (int i = 2; i <= sqrt(n); i += 2){
		if ((n - i) % 2 == 0) return 1;
	}
	return 0;
}
int main(){
	int n; cin >> n;
	if (solve(n) == 1) cout << "YES"; else cout << "NO";
	solve(n);
	return 0;
}
