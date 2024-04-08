#include <iostream>
using namespace std;
int main(){
	int n; cin >> n;
	int cnt = 0;
	for (int i = 1; i <= n; i++){
		int count = 0;
		for (int j = 1; j <= 3; j++){
			int x; cin >> x;
			if (x == 1) count++;
		}
		if (count > 1) cnt++;
	}
	cout << cnt;
}
