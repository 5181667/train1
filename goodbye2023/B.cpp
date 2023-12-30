#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char,int>c;
    int ans = 0;
    for (char cc:s) {
        c[cc] ++;
        if (c[cc] == 1) {
            ans += 2;
        }else {
            ans += 1;
        }
    }
    cout << ans << "\n";
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









