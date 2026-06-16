#include <iostream>
#include <vector>
#include <cmath>
#include <queue>
using namespace std;

bool* isPrime;
// vector<int> primes;

const long long int mod = 1e9 + 7;

void generatePrimes(int n){
    if(n < 2) return;
    isPrime = new bool[n + 1];
    // primes.clear();
    isPrime[0] = false, isPrime[1] = false; isPrime[2] = true;
    for(int i = 3; i <= n; i+=2) isPrime[i] = true;
    for(int i = 4; i <= n; i+=2) isPrime[i] = false;
    
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
    
    return;
}

int main() {
    int n;
    const int nmax = 55555;
    generatePrimes(nmax);
    // for(auto num: primes) cout << num << " "; cout << endl;
    
    int t = 1, ans;
    // cin >> t;
    while(t--){
        cin >> n;
        for(int i = 3; i <= nmax && n > 0; i += 10){
            if(isPrime[i]){
                cout << i << ' ';
                n--;
            }
        }
        cout << endl;
    }
    
    return 0;
}
