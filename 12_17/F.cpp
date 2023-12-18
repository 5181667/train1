#include<bits/stdc++.h>
#define ll long long
const int N=1e6+10;
const ll k = 1000000007;
int inv[4];
ll quickp(ll a, ll b ){
        ll ans = 1,t = a;
        while(b){
            if(b&1) ans = (ans * t)%k;
            t *= t;
            t%=k;
            b>>=1;
        }
        return ans;
}
int main() {
    ll n , m ;
    std::cin >>  n >> m;
    int q;
    std:: cin >> q;
    ll in = quickp(3,k - 2) % k;
    while (q--) {
        int l,r;
        std::cin >> l >> r;
        if (l == r) {
            std::cout << 0 << '\n';
            continue;
        }
        ll s = m  %  k * quickp(4,l + 1) % k;
        // std::cout << s << ' ';
        ll ans = s % k * (quickp(4,r - l) - 1) % k * (in) % k ; 
        std::cout << ans << '\n';

    }
    
    return 0;
}