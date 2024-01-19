#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    
    ll ma = *max_element(a.begin(),a.end());
    ll sum = accumulate(a.begin(),a.end(),1ll * 0);
    sum -= ma;
    if (ma == 0) {
        cout << 0 << '\n';
        return;
    }
    if (ma <= sum) {
        cout << 1 << "\n";
        return;
    }
    cout << ma - sum << '\n';
}
int main()
{
    int t;
    cin >> t;
    while (t --) {
        solve();
    }
    return 0;
}


