#include <iostream>
using namespace std;
int n;
string a = "I hate ", b = "I love ", s = ""; 
string solve(int i){
	while (i <= n){
		if (i % 2 != 0){
			s += a;
		} else s += b;
		if (i != n) s += "that "; else s += "it";
		i++;
	}
	return s;
}
int main(){
	cin >> n;
	cout << solve(1);
}

