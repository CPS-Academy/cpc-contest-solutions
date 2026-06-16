#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool* isPrime;
vector<int> primes;

void generatePrimes(int n){
    if(n < 2) return;
    isPrime = new bool[n + 1];
    primes.clear();
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
    
    for(; i <= n; i += 2){
        if(isPrime[i]){
            // primes.push_back(i);
        }
    }
    
    return;
}

int main() {
    
    int n, i, k, j;
    const int nmax = 1e5+3;
    generatePrimes(nmax);
    // for(auto num: primes) cout << num << " "; cout << endl;
    
    while(true){
        cin >> n;
        if(n == 1){
            cout << "1\n1\n";
        }
        else if(n == 2){
            cout << "1\n1 1\n";
        }
        else{
            cout << "2\n1";
            for(int i = 3; i <= n + 1; i++){
                if((i & 1) && isPrime[i]){
                    cout << " 1";
                }
                else cout << " 2";
            }
            cout << "\n";
        }
        break;
    }
    return 0;
}
