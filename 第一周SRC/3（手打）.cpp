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
        int l = 0, r = n - 1;
        while (l <= r) {
            int mid = (l + r) >> 1;
            if (a[mid] < q) {
                l = mid + 1;
            }
            else  {
                //大了往左找；
                r = mid - 1;
            }
        }
        if (a[l] == q) {
            cout << l + 1 << ' '; //上边输入下标从0，题目是从一
        }
        else {
            cout << "-1 ";
        }

       
    }

    return 0;
}