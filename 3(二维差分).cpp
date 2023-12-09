#include<iostream>
#include<algorithm>
#include<queue>
#include "vector"
#include "map"
#define ll long long
using namespace std;
int n,m;
int s[1010][1010];
int main(){
    cin >> n >>m;
    for(int i = 1;i<=m;i++){
        int x1,x2,y1,y2;
        cin >>x1>>y1>>x2>>y2;
        s[x1][y1]++;
        s[x1][y2+1]--;
        s[x2+1][y1]--;
        s[x2+1][y2+1]++;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            s[i][j]+=s[i-1][j]+s[i][j-1]-s[i-1][j-1];
            cout<<s[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}