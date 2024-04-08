#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    	int n;
	    cin >> n;
	    int cnt = 0;
	    for (int i = 0; i < n * 2; i++){
	      int x; cin >> x;
	      if (x % 2 == 1) cnt++;
	    }
	    if (cnt == n) cout << "Yes" << endl; else cout << "No" << endl;
    }
}
