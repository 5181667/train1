#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int>a(n);
    vector<int>b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    b[0] = a[0];
    for (int i = 1; i < n; i++) {
        b[i] = lcm(a[i],a[i - 1]);
    }
    bool flag = 1;
    for (int i = 0; i < n - 1; i ++) {
        flag &= (gcd(b[i],b[i + 1]) == a[i]);
    }
    if (flag) {
        cout << "YES\n";
    }else {
        cout << "NO\n";
    }
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


