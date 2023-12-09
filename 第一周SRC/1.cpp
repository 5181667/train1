#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
#define ll long long
// string P = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";

int main() {
   int n,m;
   cin >> n;
   vector<int>a(n);
   vector<int>s(n + 1);
   for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s[i+1] = s[i] + x;
   }
   cin >> m;
   while (m --) {
    int l ,r ;
    cin >> l >> r;
    cout << s[r] - s[l - 1] << '\n';
   }

    return 0;
}