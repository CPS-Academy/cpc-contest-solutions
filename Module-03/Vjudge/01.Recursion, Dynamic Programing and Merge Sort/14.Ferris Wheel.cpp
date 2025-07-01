#include<bits/stdc++.h>

using namespace std;
void merg(int l, int r, int * a) {
    int mid = (l + r) / 2;
    int i = l, j = mid + 1;
    vector < int > tmp;
    while (i <= mid and j <= r) {
        if (a[i] < a[j]) {
            tmp.push_back(a[i]);
            i++;
        } else {
            tmp.push_back(a[j]);
            j++;
        }
    }
    while (i <= mid) tmp.push_back(a[i++]);
    while (j <= r) tmp.push_back(a[j++]);
    for (int it: tmp) a[l++] = it;
}
void fun(int l, int r, int * a) {
    if (l == r) {
        return;
    }
    int mid = (l + r) / 2;
    fun(l, mid, a);
    fun(mid + 1, r, a);
    merg(l, r, a);
}
int main() {
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    fun(0, n - 1, a);
    int i = 0, j = n - 1, cnt = 0;
    while (i <= j) {
        if (a[i] + a[j] <= x) {
            i++;
            j--;
        } else j--;
        cnt++;
    }
    cout << cnt;
    return 0;
}