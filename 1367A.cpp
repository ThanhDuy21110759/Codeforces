#include <iostream>
using namespace std;
int main(){
	int t; cin >> t;
	while (t--){
		string s; cin >> s;
		string res;
		for (int i = 0; i < 2; i++) res += s[i];
		for (int i = 2; i < s.length(); i++){
			if (s[i] != res[res.length() - 1]){
				res += s[i];
			} else {
				res += s[i+1];
				i++;
			}
		}
		cout << res <<"\n";
	}
	return 0;
}
