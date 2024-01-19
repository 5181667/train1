#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector vis(27,vector<int>(9));
    int f = 1;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 ;j ++) {
            int x;
            cin >> x;
            for (auto a : {i , j + 9, 18 + i / 3 * 3 + j / 3}) {
                if (vis[a][x]) {
                    f = 0;
                } 
                vis[a][x] = 1;
            }
        }
    }
    



    if (f) {
        cout << "Yes\n";
    }else {
        cout << "No\n";
    }
    return 0;
}






