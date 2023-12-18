#include<bits/stdc++.h>
#define ll long long
const int N=1e6+10;
using namespace std;
ll f[300][8000];
int n;
ll answer(ll sum,vector<int>&c) {
    for (int i = 0; i < n; i++)
    {
        for (int j = sum / 2; j >= c[i]; j--) {
            f[i + 1][j] = f[i][j];
            if (c[i] <= j && f[i][j- c[i]] + c[i] > f[i][j]){// 先要确保c[i]的值不能大于背包容量
                f[i + 1][j] = f[i][j - c[i]] + c[i];
            }
        }
    }
    return sum - 2 * f[n][sum / 2];

}
int main() {
    
    cin >> n;
    vector<int>a(n),b(n),c(n + 1);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        c[i + 1] = abs(a[i] - b[i]);
        sum += c[i + 1];
    }


    
    sort(c.begin() + 1,c.end());
    
    cout << answer(sum,c);
    return 0;
}