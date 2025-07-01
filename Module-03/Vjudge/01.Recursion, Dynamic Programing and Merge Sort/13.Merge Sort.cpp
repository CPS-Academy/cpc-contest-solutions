#include<bits/stdc++.h>

using namespace std;
int cnt = 0;
void Merge(int * A, int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    int L[n1 + 1], R[n2 + 1];
    for (int i = 0; i < n1; i++) {
        L[i] = A[left + i];
    }
    for (int i = 0; i < n2; i++) {
        R[i] = A[mid + i];
    }
    L[n1] = 1e9;
    R[n2] = 1e9;
    int i = 0, j = 0;
    for (int k = left; k < right; k++) {
        cnt++;
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
    }
}
void Merge_sort(int * A, int l, int r) {
    if (l + 1 < r) {
        int mid = (l + r) / 2;
        Merge_sort(A, l, mid);
        Merge_sort(A, mid, r);
        Merge(A, l, mid, r);
    }
}
signed main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    Merge_sort(a, 0, n);
    for (int i = 0; i < n; i++) {
        cout << a[i];
        if (i < n - 1) cout << ' ';
        else cout << '\n';
    }
    cout << cnt << '\n';
    return 0;
}