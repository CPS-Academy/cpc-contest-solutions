#include<bits/stdc++.h>
// #pragma GCC target ("avx2")
// #pragma GCC optimization ("O3")
// #pragma GCC optimization ("unroll-loops")
typedef long long ll;
using namespace std;
#define V vector<ll>
#define VV vector<vector<ll>>
#define A(a) for(auto &x:a)cin>>x;
#define C(a) for(auto x:a)cout<<" "<<x;cout<<endl;
#define CC(a) cout<<(#a);for(auto x:a)cout<<" "<<x;cout<<endl;
#define D(a) cout<<(#a)<<"-> "<<a<<endl;
#define DD(a,b) cout<<(#a)<<"-> "<<a<<" "<<(#b)<<"-> "<<b<<endl;
#define D3(a,b,c) cout<<(#a)<<"-> "<<a<<" "<<(#b)<<"-> "<<b<<" "<<(#c)<<"-> "<<c<<endl;
#define Q int tt,qq; cin>>tt ;for(qq=1;qq<=tt;qq++)
#define I ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define B(a) a.begin(),a.end()
#define rB(a) a.rbegin(),a.rend()
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define double long double
ll M=676767677,inf=9223372036854775807;
#define N 300005
int main(){
    Q{
        ll n,ans=1;
        cin>>n;
        vector<ll>a(n);
        for(auto &x:a){
            cin>>x;
            x--;
        }
        ll l=0,r=n-1,t=0,x=0;
        while(l<=r){
            if(l==r){
                if(a[l]!=t){
                    ans=0;
                }
                else{
                    ans*=2;
                    ans%=M;
                    t++;
                }
                break;
            }
            ll k=a[l]+a[r];
            if(k==n+t+t){
                t+=2;
            }
            else if(k==n+t+t-2){
                
            }
            else if(k==n+t+t-1){
                ans*=2;
                ans%=M;
                t++;
            }
            else{
                ans=0;
                break;
            }
            l++;
            r--;
            n-=2;
        }
        cout<<ans<<'\n';
    }
}

