#include <bits/stdc++.h>
#include <string.h>
#include <set>
using namespace std;
int main(){
	string a, b, c; cin >> a >> b >> c;
	//solve
	int arr[27] = {0}, res[27] = {0};
	for (int i = 0; i < a.length(); i++) arr[int(char(a[i])) - 64]++;
	for (int i = 0; i < b.length(); i++) arr[int(char(b[i])) - 64]++;
	for (int i = 0; i < c.length(); i++) res[int(char(c[i])) - 64]++;
	bool kt = true;
	for (int i = 1; i < 27; i++){
		if (arr[i] != res[i]){
			kt = false;
			break;
		}
	}
	if (kt) cout <<"YES"<<endl; else cout <<"NO"<<endl;
	return 0;
}
