#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
#define D double 
D eps = 1e-8;
D dis(D a,D b,D c,D d){
    return sqrt((a-c)*(a-c)+(b-d)*(b-d));
}


//！！！
//写的有些复杂，其实不分两种情况也是可以的。。。

void solve() {
    D px,py,ax,ay,bx,by;
    cin >> px >> py >> ax >> ay >> bx >> by;
    D near = dis(0,0,ax,ay) <= dis(0,0,bx,by) ? 1:2;
    D l = 0,r = 5000;
    while(r-l>=eps){
        D mid = (l+r)/2;
        if(near == 1){
            D da = dis(0,0,ax,ay);
            D db = dis(0,0,bx,by);
            D da1 = dis(px,py,ax,ay);
            D db1 = dis(px,py,bx,by);
            D dab = dis(ax,ay,bx,by);
            if(da > mid){
                l = mid;
                continue;
            }
            if(((db<=mid||dab<=2*mid)&&db1<=mid)||da1<=mid){
                r = mid;
                continue;
            }
            l = mid;
        }
        else{
            D da = dis(0,0,ax,ay);
            D db = dis(0,0,bx,by);
            D da1 = dis(px,py,ax,ay);
            D db1 = dis(px,py,bx,by);
            D dab = dis(ax,ay,bx,by);
            if(db > mid){
                l = mid;
                continue;
            }
            if(((da<=mid||dab<=2*mid)&&da1<=mid)||db1<=mid){
                r = mid;
                continue;
            }
            l = mid;
        }
    }
    cout<<fixed<<setprecision(7)<<l<<'\n';
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