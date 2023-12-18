#include<bits/stdc++.h>
using namespace std;
#define pl p * 2
#define pr p * 2 + 1
#define ll long long
char m[100][100];
int main() {
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> m[i][j];
		}
	}

	int go;
	cin >> go;
	int i = 1,j = 1;
	while (go--) {
		string ne;
		int num;
		cin >> ne >> num;
		if (ne.size() > 5) {
			while(num--) {
				if (i + 1 > n || j + 1 > n || m[i + 1][j + 1] == 'X' || (m[i + 1][j] == 'X' && m[i][j + 1] == 'X')) {
					continue;
				}else {
					++i,++j;
				}
			}
			continue;
		}
		if (ne == "east") {
			while(num--) {
				if ( j + 1 > n || m[i][j + 1] == 'X') {
					continue;
				}else {
					++j;
				}
			}
			continue;
		}
		if (ne == "south") {
			while(num--) {
				if (i + 1 > n || m[i + 1][j] == 'X') {
					continue;
				}else {
					++i;
				}
			}
			continue;
		}
	}
	if (i == n && j == n) {
		cout << "YaHo!";
	}else {
		cout << i << " " << j;
	}
	
}