#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
#define ll long long
// string P = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";

int main() {
   int n,m;
   cin >> n >> m;
   vector<int>a(n);
   vector<int>s(n + 1);
   for (int i = 0; i < n; i++) {
        cin >> a[i];
   }
   // cin >> m;
   while (m --) {
        int l,r,x;
        cin >> l >> r >> x;
        l--,r--;
        s[l] += x;
        s[r + 1] -= x;
   }
   ll now = 0;
   int mi = 1e9;
   for (int i = 0; i < n; i++) {   
        now += s[i];
        a[i] += now;
        mi = min (mi , a[i]);
   }
   cout << mi;

    return 0;
}