#include <bits/stdc++.h>
#include <vector>
#include <set>
using namespace std;
typedef vector <int> vi;
typedef set <int> st;
int main(){
	int n; cin >> n;
	st s;
	int x = 0, y = 0, c;
	cin >> x;
	for (int i = 0; i < x; i++){
		cin >> c;
		s.insert(c);
	}
	cin >> y;
	for (int i = 0; i < y; i++){
		cin >> c;
		s.insert(c);
	}
	if (s.size() == n) cout <<"I become the guy."; else cout <<"Oh, my keyboard!";
	return 0;
}
