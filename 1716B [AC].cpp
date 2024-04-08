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
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int t;
  cin >> t;
  for (int i = 0; i < t; i++){
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    for (int j = 0; j < n; j++){
      for (int k = 0; k < n; k++){
        a[j][k] = k;
      }
    }
    for (int j = 0; j < n - 1; j++){
      a[j + 1] = a[j];
      swap(a[j + 1][0], a[j + 1][j + 1]);
    }
    cout << n << endl;
    for (int j = 0; j < n; j++){
      for (int k = 0; k < n; k++){
        cout << a[j][k] + 1;
        if (k < n - 1){
          cout << ' ';
        }
      }
      cout << endl;
    }
  }
  return 0;
}





