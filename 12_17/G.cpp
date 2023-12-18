#include<bits/stdc++.h>
#define ll long long
const int N=1e6+10;
struct node{
    int x,f,s;
}q[N];
signed main()
{
    std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
    int n,m,moo=0;
    std::cin>>n>>m;
    std::vector<int>map(m);
    for(int i = 1;i <= n; i++){
        int a;
        std::cin >> a;
        if(a - moo>=0){
            q[i].x = a - moo;
            q[i].f = moo;
            q[i].s = 0;
            moo = a - moo;
        }else{
            q[i].x = 0;
            q[i].f = a;
            q[i].s = moo - a;
            moo -= a;
        }
    }
    for(int i = 0;i < m; i++)
    	std::cin>>map[i];
    for(auto &i:map) 
    	std::cout << q[i].x << " " << q[i].f << " " << q[i].s <<'\n';
    return 0;
}