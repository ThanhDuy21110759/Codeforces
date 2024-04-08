#include <iostream>
using namespace std;
int main(){
	int n; cin >> n;
	int arr[5] = {0};
	for (int i = 1; i <= n; i++){
		int x; cin >> x;
		arr[x]++;
	}
	
	int res = arr[4] + arr[3] + arr[2] / 2; // x1 arr[4] + x2 arr[3] + x3 2*arr[2] 
	arr[1] -= arr[3];
	//tinh phan con su cua arr[2]
	if (arr[2] % 2 == 1){
		res += 1;
		arr[1] -= 2;
	}
	if (arr[1] > 0){
		res += (arr[1] + 3) / 4; 
		// vd: 9 = 4 + 4 + 1 [+3 = 4 + 4 + 4 lam tron xuong = 3 Groups]
		// vd: 9 = 4 + 4 + 3 [+3 = 4 + 4 + 6 lam tron xuong = 3.5 -> 3 Groups]
	}
	cout << res;
}
