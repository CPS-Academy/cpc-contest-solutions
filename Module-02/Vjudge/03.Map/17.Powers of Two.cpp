
#include <bits/stdc++.h>

using namespace std;


int main () {
	int n;
	cin >> n;
	vector < int > ara(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> ara[i];
	}
	map < int, int > cnt;
	long long ans = 0;
	for (int i = 1; i <= n; i++) {
		for (int p = 0; p <= 30; p++) {
			int sum = (1 << p);
			int need = sum - ara[i];
			ans += cnt[need];
		}
		cnt[ara[i]]++;
	}
	cout << ans << endl;
}