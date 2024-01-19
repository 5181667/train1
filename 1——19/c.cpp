#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve() {
	int n,k;
	cin >> n >> k;;
	vector<int>a(n);
	int mi = 1e9;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] % k == 0) {
			mi = 0;
		}
		mi = min(mi,k - a[i] % k );
	}

	if (k != 4) {
		cout << mi << '\n';
		return ;
	}
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 4 == 0) {
			cnt += 2;
		}
		else if (a[i] % 2 == 0) {
			cnt ++;
		}
	}
	if (cnt >= 2) {
		cout << 0 << "\n";
	}else {
		cout << min(mi , 2 - cnt) << '\n';
	}
	
}
int main()
{
    int t = 1;
     cin >> t;
     while (t --) {
     	solve();
     }
    return 0;
}

