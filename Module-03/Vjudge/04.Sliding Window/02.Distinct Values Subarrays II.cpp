#include <bits/stdc++.h>
using namespace std;
 
#define ll long long


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    queue<int> q;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        q.push(x);
    }

    queue<int> window;
    map<int, int> cnt;

    ll ans = 0;

    while(!q.empty()){
        int x = q.front();
        q.pop();

        window.push(x);
        cnt[x]++;

        if(cnt.size()>k){
            while(cnt.size()>k){
                int x = window.front();
                window.pop();
                cnt[x]--;
                if(cnt[x]==0){
                    cnt.erase(x);
                }
            }
        }

        ans += window.size();
    }

    cout << ans << endl;
    
    
    return 0;
}
