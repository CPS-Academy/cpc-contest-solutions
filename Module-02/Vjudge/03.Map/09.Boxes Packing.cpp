
#include <bits/stdc++.h>
using namespace std;

int main () {
	int n;
	cin >> n;
	map < int, int > boxCount;
	int maxCnt = 0;
	for (int i = 0, x; i < n; i++) {
		cin >> x;
		boxCount[x]++;
		maxCnt = max(maxCnt, boxCount[x]);
	}
	cout << maxCnt << endl;
	return 0;
}