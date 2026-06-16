#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool* isPrime;
int* pref;
// vector<int> primes;

void generatePrimes(int n){
    if(n < 2) return;
    isPrime = new bool[n + 1];
    pref = new int[n + 1];
    // primes.clear();
    isPrime[0] = false, isPrime[1] = false;
    pref[0] = 0, pref[1] = 0;
    for(int i = 3; i <= n; i += 2) isPrime[i] = true;
    for(int i = 4; i <= n; i += 2) isPrime[i] = false;
    isPrime[2] = 1;
    pref[2] = 1;
    // primes.push_back(2);
    int i;
    for(i = 3; i * i <= n; i += 2){
        if(isPrime[i]){
            // primes.push_back(i);
            for(int imul = i * i; imul <= n; imul += (i << 1)){
                isPrime[imul] = false;
            }
        }
    }
    
    for(int i = 3; i <= n; i++){
        pref[i] = pref[i - 1] + isPrime[i];
    }
    
    // for(; i <= n; i += 2){
    //     if(isPrime[i]){
    //         // primes.push_back(i);
    //     }
    // }
    
    return;
}


int main() {
    int m, n;
    const int nmax = 1e7 + 1;
    generatePrimes(nmax);
    // for(auto num: primes) cout << num << " "; cout << endl;
    
    int t = 1;
    cin >> t;

    while(t--){
        cin >> m >> n;
        cout << pref[n] - pref[m - 1] << '\n';
        
    }
    
    return 0;
}
