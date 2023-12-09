#include<bits/stdc++.h>

#define ll long long
using namespace std;

int main(){
    int n , m;
    cin >> n >> m;
    vector<int>a(n);
    for (int &x:a) {
        cin >> x;
    }

    while (m --) {
        int q;
        cin >> q;
        auto f = lower_bound(a.begin(),a.end(),q);
        if (*f != q) {
            cout << -1 << ' ';
        }else {
            cout << f - a.begin() + 1 << ' ';
        }

    }
    return 0;
}