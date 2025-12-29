#include <bits/stdc++.h>
using namespace std;
struct point{
    long long x,y;
};
int main() {
    int n;
    cin>>n;
    while(n--){
        point p1,p2,p3;
        cin>>p1.x>>p1.y>>p2.x>>p2.y>>p3.x>>p3.y;
        long long c=(p2.x-p1.x)*(p3.y-p1.y)-(p2.y-p1.y)*(p3.x-p1.x);
        if(c>0)cout<<"LEFT\n";
        else if(c<0)cout<<"RIGHT\n";
        else cout<<"TOUCH\n";
    }
}
