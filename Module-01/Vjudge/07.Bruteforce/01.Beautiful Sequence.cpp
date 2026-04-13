#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    scanf("%d", &T);
    while(T--) {
        int m;
        scanf("%d", &m);
        int value;
        bool isBeatiful = false;
        for(int index = 1; index <= m; index++) {
            scanf("%d", &value);
            if(value <= index) isBeatiful = true;
        }
        if(isBeatiful) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
