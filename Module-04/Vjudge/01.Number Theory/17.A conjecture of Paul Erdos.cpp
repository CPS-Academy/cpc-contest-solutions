#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool* isPrime;
vector<int> primes;

const long long int mod = 1e9 + 7;

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
    long long int n, x, ans;
    const int nmax = 1e7;
    generatePrimes(nmax);
    // for(auto num: primes) cout << num << " "; cout << endl;
    
    int* ok = new int[nmax];
    for(int i = 0; i < nmax; i++)
        ok[i] = 0;
    
    ok[2] = 1;
    for(long long int y = 1; y <= 58; y++){
        long long int y4 = y * y * y * y;
        for(long long int x = 1; x * x <= nmax - y4; x++){
            //
            long long int val = x * x + y4;
            if((val & 1) && isPrime[val]){
                ok[val] = 1;
            }
        }
    }
    
    int* pref = new int[nmax];
    pref[0] = ok[0];
    for(int i = 1; i < nmax; i++)
        pref[i] = pref[i - 1] + ok[i];
    
    int t = 1;
    cin >> t;
    while(t--){
        cin >> n;
        cout << pref[n] << '\n';
    }
    
    return 0;
}
