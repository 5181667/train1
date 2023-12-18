#include<bits/stdc++.h>
using namespace std;
#define pl p * 2
#define pr p * 2 + 1
#define ll long long
int m;
int n;
ll tr[1000000],add[1000000];

void build(int p,int l,int r) {
	if (l == r) {
		tr[p] = m;
		return;
	}
	int mid = (l + r) >> 1;
	build(pl,l,mid);
	build(pr,mid + 1,r);
	tr[p] = min(tr[pl] , tr[pr]);
}

void pushdown(int p,int l,int r) {
	if (add[p] != 0) {
		int mid = (l + r) >> 1;
		tr[pl] += add[p];
		tr[pr] += add[p];
		add[pl] += add[p];
		add[pr] += add[p];
		add[p] = 0;
	}
}
void modify(int p,int l,int r,int L,int R,int d) {
	if (L <= l && r <= R) {
		tr[p] += d;
		add[p] += d;
		return;
	}
	int mid = ( l + r) >> 1;
	pushdown(p,l,r);
	if (L <= mid) {
		modify(pl,l,mid,L,R,d);
	}
	if (R > mid) {
		modify(pr,mid+1,r,L,R,d);
	}
	tr[p] = min(tr[pl] , tr[pr]);
}
ll query(int p,int l,int r,int L,int R) {
	if (L <= l && r <= R) {
		return tr[p];
	}
	int mid = ( l + r) >> 1;
	pushdown(p,l,r);
	ll ans = 1e9;
	if (L <= mid) {
		ans = query(pl,l,mid,L,R);
	}
	if (R > mid) {
		ans = min(ans,query(pr,mid + 1, r,L,R));
	}
	return ans;

}
int main() {
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	int ans = 0;
	build(1,1,n);
	// cout <<query(1,1,n,1,n)<<" ";
	for (int i = 1; i<= n; i++) {
		int l,r,x;
		cin >> l >> r >> x;
		modify(1,1,n,l,r,-x);
		if (!ans){
			if (query(1,1,n,1,n) <= 0) {
				// cout << query(1,1,n,1,n) << " ";
				ans = i;
			}
		}
		
	}
	if (ans == 0) {
		cout << "impossible";
		return 0;
	}
	cout << ans;
	
}