
#include <bits/stdc++.h>


using namespace std;
int main () {
	int T;
	cin >> T;
	while (T--) {
		map < long long, bool > gotSum;
		bool isYes = false;
		long long sum = 0;
		gotSum[0] = true;
		int n;
		cin >> n;
		for (int i = 0, x; i < n; i++) {
			cin >> x;
			if (i % 2 == 0) x *= -1;
			sum += x;
			if (gotSum[sum] == true) {
				isYes = true;
			}
			gotSum[sum] = true;
		}
		if (isYes == true) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}