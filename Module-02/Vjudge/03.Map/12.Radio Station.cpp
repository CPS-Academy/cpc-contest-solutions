
#include <bits/stdc++.h>
using namespace std;

int main () {
	int n, m;
	cin >> n >> m;
	map < string, string > nameOfIp;
	string name, ip;
	for (int i = 0; i < n; i++) {
		cin >> name >> ip;
		nameOfIp[ip] = name;
	}
	string command;
	for (int i = 0; i < m; i++) {
		cin >> command >> ip;
		string nIp = ip;
		nIp.pop_back();
		cout << command << " " << ip << " #" << nameOfIp[nIp] << endl;
	}
return 0;
}