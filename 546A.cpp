#include <iostream>
using namespace std;
int main(){
	int k, m, n; cin >> k >> m >> n;
	if ( (((n + 1)*n)/2) * k - m > 0 ) cout << (((n + 1)*n)/2) * k - m; else cout << "0";
}
