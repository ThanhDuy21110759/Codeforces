#include <iostream>
using namespace std;
int main(){
	int m, n; cin >> m >> n;
	int cnt = 0;
	while (m <= n){
		m *= 3;
		n *= 2;
		cnt++;
	}
	cout << cnt;
}
