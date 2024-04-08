#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <set>
#include <map>
#define MOD 1000000007
using namespace std;
typedef long long ll;
typedef vector <ll> vll;
typedef set <ll> sll;
typedef multiset <ll> msll;
ll n;
void swap(char &a, char &b){
	char tam = a;
	a = b;
	b = tam;
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int t; cin >> t;
	while (t--){
		cin >> n;
		string s; 
		for (int i = 1; i <= n; i++) s += to_string(i) + " ";
		s.pop_back();
		//solve
		cout << n << "\n" << s << endl;
		for (int i = s.length() - 1; i > 1; i--){
		    if (s[i] != ' '){
		        swap(s[i], s[i - 2]);
		        cout << s << endl;
		    }
		}
	}
	return 0;
}





