#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int l, r, k;
		cin >> l >> r >> k;
		if (l == r && l > 1) { // if l and r are the same and > 1, then output YES
			cout << "YES" << '\n';
			continue;
		}
		int start = l / 2; // odd numbers from 1 to l - 1
		int end = (r + 1) / 2; // odd numbers from 1 to r
		int odd = end - start; // odd numbers between l and r
		cout << (k >= odd ? "YES" : "NO") << '\n'; // check if there are enough operations to change the odd numbers
	}
	return 0;
}