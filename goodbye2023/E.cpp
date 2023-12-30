#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
     int n,q;
     cin >> n >> q;
     vector<int>a(n);
     vector<int>s(n + 1);
     for (int i = 0; i < n; i++) {
        cin >> a[i];
        // s[i + 1] = s[i] + a[i];
     }
     sort(a.begin(),a.end(),greater<>());
     for (int i = 0; i < n; i++) {
        s[i + 1] = s[i] + a[i];
     }

     while (q--) {
        int x;
        cin >> x;
        int it = lower_bound(s.begin() + 1,s.end(),x) - s.begin();
        if (it == n  + 1) {
            cout << "-1\n";
            continue;
        }
        cout << it << '\n';
     }


}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}












