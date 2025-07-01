
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    map < string, string > personToCountry;
    map < string, int > personCnt, countryCount;
    int n, m;
    cin >> n >> m;
    string name, country;
    int maxCvote = 0, maxPvote = 0;
    string maxCname = "", maxPname = "";
    for (int i = 0; i < n; i++) {
        cin >> name >> country;
        personToCountry[name] = country;
    }
    for (int i = 0; i < m; i++) {
        cin >> name;
        personCnt[name]++;
        country = personToCountry[name];
        countryCount[country]++;
        if (maxPvote <= personCnt[name]) {
            maxPvote = personCnt[name];
            if (maxPvote == personCnt[name]) {
                maxPname = min(maxPname, name);
            }
            else maxPname = name;
        }
        if (maxCvote <= personCnt[country]) {
            maxCvote = countryCount[country];
            if (maxCvote == countryCount[country]) {
                maxCname = min(maxCname, country);
            }
            else maxCname = country;
        }
    }
    cout << maxCname << endl << maxPname << endl;
}