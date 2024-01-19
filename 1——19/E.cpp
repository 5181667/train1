#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,d,p;
    cin >> n >> d >> p;
    vector<ll>a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.rbegin(),a.rend());
    ll sum = 0;
    ll ans = 0;
    for (int i = 0; i < n; i ++) {
        sum += a[i];
        if ((i + 1) % d == 0) {
            ans += min(sum,p);
            sum = 0;
        }
    }
    ans += min(sum,p);
    cout << ans << '\n';
    return 0;
}

