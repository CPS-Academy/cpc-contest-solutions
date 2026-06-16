#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    int cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x == 1) cnt1++;
        else cnt2++;
    }
    if(cnt1 == 0){
        for(int i = 0; i < n; i++) cout << "2 "; cout << "\n";
    }
    else if(cnt2 == 0){
        for(int i = 0; i < n; i++) cout << "1 "; cout << "\n";
    }
    else{
        cout << "2 1";
        cnt2--; cnt1--;
        while(cnt2--) cout << " 2";
        while(cnt1--) cout << " 1";
        cout << "\n";
    }
    return 0;
}
