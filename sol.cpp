#include <bits/stdc++.h>
using namespace std;

void TestCase() {
	int n, k;
	cin >> n >> k;
	if (k == 1) {
		cout << (n == 1 ? 1 : -1) << '\n';
		return;
	} else if (k > n) {
		cout << "-1\n";
		return;
	}
	//at least 2 good subsegments of length N, where N > 1
	//N = 5, K = 2
	//1 2 3 4 5 = 5
	//1 2 3 5 4 = 4
	//1 2 5 3 4 = 3
	//1 5 2 3 4 = 2
	//range: [2, N]
	vector<int> sequence(n, 0);
	for (int i = 0; i < n; i++) {
		sequence[i] = i + 1;
	}
	swap(sequence[k-1], sequence[n-1]);
	for (int i = 0; i < n; i++) {
		cout << sequence[i] << " ";
	}
	cout << '\n';
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	cin >> tc;
	for (int t = 0; t < tc; t++) {
		TestCase();
	}
	return 0;
}

