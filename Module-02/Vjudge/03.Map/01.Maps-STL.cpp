
#include <cmath>
#include <cstdio>
#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int q;
    cin >> q;
    map < string, int > allMarks;
    while (q--) {
        int type;
        cin >> type;
        if (type == 1) {
            string name;
            int mark;
            cin >> name >> mark;
            allMarks[name] += mark;
        }
        else if (type == 2) {
            string name;
            cin >> name;
            allMarks.erase(name);
        }
        else {
            string name;
            cin >> name;
            cout << allMarks[name] << endl;
        }
    }
    return 0;
}


