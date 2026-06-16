#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int* countPrimeFactor;

void countPrimeFactors(int n){
    if(n < 2) return;
    countPrimeFactor = new int[n + 1];
    countPrimeFactor[0] = 0, countPrimeFactor[1] = 0;
    for(int i = 3; i <= n; i += 2) countPrimeFactor[i] = 0;
    for(int i = 2; i <= n; i += 2) countPrimeFactor[i] = 1;
    int i;
    for(i = 3; i <= n; i += 2){
        if(countPrimeFactor[i] == 0){
            for(int imul = i; imul <= n; imul += i){
                countPrimeFactor[imul]++;
            }
        }
    }
    
    return;
}

int main() {
    
    int n, a, b;
    const int nmax = 1e6+3;
    countPrimeFactors(nmax);
    // for(auto num: primes) cout << num << " "; cout << endl;
    
    int pref[11][nmax];
    for(int k = 1; k <= 10; k++){
        pref[k][0] = 0;
        pref[k][1] = 0;
        for(int i = 2; i < nmax; i++){
            pref[k][i] = pref[k][i - 1] + (countPrimeFactor[i] == k);
        }
    }
    int t;
    cin >> t;
    while(t--){
        cin >> a >> b >> n;
        if(n == 0){
            cout << (a == 1) << endl;
        }
        else
        cout << pref[n][b] - pref[n][a - 1] << endl;
//         break;
    }
    return 0;
}
