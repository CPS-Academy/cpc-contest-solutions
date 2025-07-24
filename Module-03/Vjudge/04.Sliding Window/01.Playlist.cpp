#include <bits/stdc++.h>
using namespace std;
 
#define ll long long


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    queue<int> x;

    for(int i = 0; i < n; i++){
        int v;
        cin >> v;
        x.push(v);
    }

    queue<int> window;

    map<int, int> cnt;

    int ans = 0;

    for(int i = 0; i < n; i++){
        int v = x.front();
        x.pop();

        if(cnt[v]==1){
            while(cnt[v]==1){
                int y = window.front();
                window.pop();
                cnt[y]--;
            }
        }

        window.push(v);
        cnt[v]++;

        ans = max(ans, (int) window.size());
    }

    cout << ans << endl;
    
    return 0;
}
