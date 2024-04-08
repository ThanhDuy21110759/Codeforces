#include <iostream>
using namespace std;
int main(){
	int x; cin >> x;
	int cnt = 0, pos = 5;
	while (x > 0){
		while (x % pos == 0 && x > 0){
			cnt++;
			x -= pos;
		}
		pos--;
	}
	cout << cnt;
}
