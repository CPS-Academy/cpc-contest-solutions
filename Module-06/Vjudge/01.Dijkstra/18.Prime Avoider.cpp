#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll inf=1e18;
vector<bool>is_prime;

// Returns a vector where it tells us if a number is prime or not up to n (inclusive)
vector<bool> sieve(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }

    return is_prime;
}

// Templete from SphereOJ Travelling cost
ll Dijkstra(string src,string term,int n){
    vector<ll>dis(n+1,inf);
    vector<bool>pros(n+1);
    dis[stoi(src)]=0;
    priority_queue<pair<ll,string>,vector<pair<ll,string>>,greater<>>q;
    q.push({0,src});
    while(q.size()){
        auto [d,u]=q.top();
        q.pop();
        int u_int=stoi(u);
        if(u==term){
            return dis[u_int];
        }
        if(pros[u_int])continue;
        pros[u_int]=true;
        for(int i=0;i<u.size();i++){
            if(u[i]!='0'){
                auto v=u;
                v[i]--;
                int v_int=stoi(v);
                if(!is_prime[v_int]){
                    if(dis[v_int]>dis[u_int]+v_int){
                        dis[v_int]=dis[u_int]+v_int;
                        q.push({dis[v_int],v});
                    }
                }
            }

            if(u[i]!='9'){
                auto v=u;
                v[i]++;
                int v_int=stoi(v);
                if(!is_prime[v_int]){
                    if(dis[v_int]>dis[u_int]+v_int){
                        dis[v_int]=dis[u_int]+v_int;
                        q.push({dis[v_int],v});
                    }
                }
            }
        }
    }
    return -1;
}
int main(){
    is_prime=sieve(1000000);
    int q;
    cin>>q;
    for(int k=1;k<=q;k++){
        cout<<"Case "<<k<<": ";
        string a,b;
        cin>>a>>b;
        if(is_prime[stoi(b)]){
            cout<<-1<<'\n';
        }
        else{
            auto ans=Dijkstra(a,b,1000000);
            if(ans==-1){
                cout<<-1<<'\n';
            }
            else{
                cout<<ans+stoi(a)<<'\n';
            }
        }
    }
}

