#include <iostream>
using namespace std;
int a[6] = {1, 5, 10, 20, 100};
int main(){
	int n; cin >> n;
	int pos = 4;
	int count = 0;
	while (n > 0){
		if (n - a[pos] >= 0){
			count++;
			n -= a[pos];
		} else pos--;
	}
	cout << count;
}
