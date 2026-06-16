#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool* isPrime;
// vector<int> primes;

void generatePrimes(int n){
    if(n < 2) return;
    isPrime = new bool[n + 1];
    // primes.clear();
    isPrime[0] = false, isPrime[1] = false;
    for(int i = 2; i <= n; i++) isPrime[i] = true;
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
    
    // for(; i <= n; i += 2){
    //     if(isPrime[i]){
    //         // primes.push_back(i);
    //     }
    // }
    
    return;
}

int main() {
    
    int n, i;
    const int nmax = 1e6;
    generatePrimes(nmax);
    // for(auto num: primes) cout << num << " "; cout << endl;
    
    while(true){
        cin >> n;
        if(n == 0) break;
        for(i = 3; i <= n; i += 2){
            if(isPrime[i] && isPrime[n - i]){
                cout << n << " = " << i << " + " << (n - i) << '\n';
                break;
            }
        }
        if(i > n){
            cout << "Goldbach's conjecture is wrong.\n";
        }
        
    }
    return 0;
}