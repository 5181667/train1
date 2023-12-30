#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n,k;
    cin >> n >> k;
    vector<pair<int,int>>a(n);
    for (int i = 0; i < n; i++) {
        auto &[x,y] = a[i];
        cin >> x >> y;
    }
    
    ll l = 1, r = 1000000000;
    while (l <= r) {
        ll mid = (l + r) >> 1;
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            if (a[i].first >= mid) {
                sum += a[i].second;
            }
        }
        if (sum <= k) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    cout << l << "\n";

}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
