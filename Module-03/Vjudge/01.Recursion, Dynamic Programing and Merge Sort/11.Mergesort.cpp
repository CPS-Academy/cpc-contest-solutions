#include<bits/stdc++.h>

using namespace std;
void merg(int l, int r, vector < int > & a) {
    int mid = (l + r) / 2;
    vector < int > tmp;
    int i = l, j = mid + 1;
    while (i <= mid and j <= r) {
        if (a[i] <= a[j]) {
            tmp.push_back(a[i]);
            i++;
        } else {
            tmp.push_back(a[j]);
            j++;
        }
    }
    while (i <= mid) tmp.push_back(a[i++]);
    while (j <= r) tmp.push_back(a[j++]);
    for (int i: tmp) a[l++] = i;
}
void Merg_sort(int l, int r, vector < int > & a) {
    if (l == r) {
        return;
    }
    int mid = (l + r) / 2;
    Merg_sort(l, mid, a);
    Merg_sort(mid + 1, r, a);
    merg(l, r, a);
}
signed main() {
    string s;
    getline(cin, s);
    vector < int > a;
    int i = 0;
    while (i < s.size()) {
        int vl = 0;
        while (i < s.size() and isdigit(s[i])) {
            vl = vl * 10 + s[i] - '0';
            i++;
        }
        i++;
        a.push_back(vl);
    }
    int n = a.size();
    Merg_sort(0, n - 1, a);
    for (int i: a) cout << i << ' ';
    cout << endl;
    return 0;
}