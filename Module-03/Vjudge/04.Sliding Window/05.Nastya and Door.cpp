#include <bits/stdc++.h>
using namespace std;
 
#define ll long long


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        int x[n];
        for(int i = 0; i < n; i++){
            cin >> x[i];
        }

        int p[n];
        p[0] = 0, p[n-1] = 0;

        for(int i = 1; i < n-1; i++){
            if(x[i]>x[i-1] && x[i]>x[i+1]){
                p[i] = 1;
            }
            else {
                p[i] = 0;
            }
        }

        int l = 0, r;
        int sum = 0;
        for(int i = 0; i < k; i++){
            r = i;
            sum += p[i];
        }

        int mx = sum-p[0]-p[k-1];
        int indx = 0;

        for(int i = 0; i < n; i++){
            sum -= p[i];
            if(i+k >= n){
                break;
            }
            sum += p[i+k];
            l = i+1;
            r = i+k;

            int cnt = sum-p[l]-p[r];
            if(cnt > mx){
                mx = cnt;
                indx = l;
            }
        }

        cout << mx+1 << " " << indx+1 << '\n';
    }

    
    return 0;
}
