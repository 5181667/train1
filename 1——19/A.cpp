#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>a(n);
    for (int &i:a) {
        cin >> i;
    }

    int ma = *max_element(a.begin(),a.end());
    int cnt = count(a.begin(),a.end(),ma);
    if (a[0] == ma && cnt == 1) {
        cout << 0 << '\n';
    }else {
        cout << ma - a[0] + 1 << '\n';
    }

    return 0;
}