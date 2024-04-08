#include <iostream>
using namespace std;
void solve() {
    int n;
    cin >> n;
    int l = -1e18, r = 1e18;
    while (n--) {
        int x, y;
        cin >> x >> y;
        l = max(l, x);
        r = min(r, y);
    }
    if (r > l) r = l;
    cout << l - r << '\n';
}
 
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int q;
    cin >> q;
    while (q--) {
        solve();
    }
}

