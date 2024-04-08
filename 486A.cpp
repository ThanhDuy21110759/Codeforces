#include <iostream>
using namespace std;
int main(){
	unsigned long long n; cin >> n;
	
	long long res = 0; 
	long long ssh = 0;
	
	if (n % 2 == 0) {
		ssh = n / 2;
		res = ((n + 2)*ssh)/2 - (((n - 1) + 1)*ssh)/2;
	} else {
		ssh = (n - 1) / 2;
		res = (((n - 1) + 2)*ssh)/2 - (((n - 2) + 1)*ssh)/2 - n;
	}
	cout << res;
}
