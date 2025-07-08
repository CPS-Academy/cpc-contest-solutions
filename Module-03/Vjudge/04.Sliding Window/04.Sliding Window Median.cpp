#include <bits/stdc++.h>

using namespace std;

#define ll long long

multiset < int > ms1, ms2;

void balance() {
    int sz = ms1.size() + ms2.size();

    int s1 = (sz + 1) / 2;
    int s2 = sz - s1;

    while (ms1.size() > s1) {
        ms2.insert( * ms1.rbegin());
        ms1.erase(--ms1.end());
    }

    while (ms2.size() > s2) {
        ms1.insert( * ms2.begin());
        ms2.erase(ms2.begin());
    }
}

void add(int x) {
    if (ms1.empty()) {
        ms1.insert(x);
    } else {
        if (x > * ms1.rbegin()) {
            ms2.insert(x);
        } else {
            ms1.insert(x);
        }
    }

    balance();
}

void remove(int x) {
    if (ms1.find(x) != ms1.end()) {
        ms1.erase(ms1.find(x));
    } else {
        ms2.erase(ms2.find(x));
    }

    balance();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int x[n];
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    for (int i = 0; i < k; i++) {
        add(x[i]);
    }

    for (int i = 0; i < n; i++) {
        cout << * ms1.rbegin() << " ";

        remove(x[i]);
        if (i + k < n) {
            add(x[i + k]);
        } else {
            break;
        }
    }
    cout << endl;

    return 0;
}