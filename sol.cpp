#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, y;
	cin >> n >> y;
	int res = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		res |= a;
	}
	int x = 0;
	for (int bit = 0; bit < 32; bit++) {
		if (((1 << bit) & y) == 0 && ((1 << bit) & res) > 0) {
			break;
		}
		if (((1 << bit) & y) > 0 && ((1 << bit) & res) == 0) {
			x += (1 << bit);
		}
	}
	cout << (res + x == y ? x : -1) << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T = 1;
	cin >> T;
	while (T--)
		solve();
}
