#include <bits/stdc++.h>

using namespace std;
#define ll long long
// ll sum1,sum2,sum3;
#define pl p*2
#define pr p*2+1

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int l,n,m;
    cin >> l >> n >> m;
    vector<ll>a (n + 1);
    a[0] = 0;
    for (int i = 1 ;i <= n ;i ++){
        cin >> a[i];
    }
    a.push_back(l);

    ll sl = 0, sr = 2000000000;
    while(sl <= sr){
        ll mid = (sl + sr ) >> 1;
        int k = 0;
        int last = 0;
        for(int i = 1; i <= n + 1;i++) {

            if(a[i] - last < mid) {

                k++;

            }else{
                last = a[i];
            }
        }
        
        if( k <= m ){
            sl = mid + 1;
        }else{
            sr = mid - 1;
        }
    }
    cout << sr;
    return 0;
}


