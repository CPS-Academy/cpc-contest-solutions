#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    queue<int>q;
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        if(k==1){
            int x;
            cin>>x;
            q.push(x);
        }
        else if(k==2){
            if(q.size()){
                q.pop();
            }
        }
        else{
            if(q.size()){
                cout<<q.front()<<'\n';
            }
            else{
                cout<<"Empty!\n";
            }
        }
    }
    return 0;
}
