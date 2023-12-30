#include<bits/stdc++.h>
#define ll long long
using namespace std;
void slove(){
        int n;
        cin >> n;
        std::vector<int> v(n);
        int f = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }
        int ff = 0;
        for(int i = 1;i < n;i++){
            if(f==0){
                if(v[i]>v[i-1]) f = 1;
            }else{
                if(v[i]<v[i-1]) ff=1;
            }
        }
        if(ff==1) cout<<"NO\n";
        else      cout<<"YES\n";
        
}
int main(){
    int _ = 1;
    cin >> _;
    while(_--){
        slove();
    }
    return 0;
}