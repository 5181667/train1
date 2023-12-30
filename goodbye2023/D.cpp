#include <bits/stdc++.h>
using namespace std;
#define D double 
struct point{
    D x = 0;
    D y = 0;
};
D dis(const point & a,const point &b){
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}
void solve() {
    point p,a,b,z;
    cin >> p.x >> p.y >> a.x >> a.y >> b.x >> b.y;
    D ans = min({
        max(dis(z,a),dis(a,p)),
        max(dis(z,b),dis(b,p)),
        max({dis(z,a),dis(a,b)/2 , dis(b,p)}),
        max({dis(z,b),dis(b,a)/2  , dis(a,p)})
    });
    cout<<fixed<<setprecision(6)<<ans<<"\n";

}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}