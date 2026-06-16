#include <iostream>
#include <vector>
#include <cmath>
#include <queue>
using namespace std;

bool* isPrime;
vector<long long int> primes;

const long long int mod = 1e9 + 7;

void generatePrimes(int n){
    if(n < 2) return;
    isPrime = new bool[n + 1];
    primes.clear();
    isPrime[0] = false, isPrime[1] = false;
    for(int i = 2; i <= n; i++) isPrime[i] = true;
    primes.push_back(2);
    int i;
    for(i = 3; i * i <= n; i += 2){
        if(isPrime[i]){
            primes.push_back(i);
            for(int imul = i * i; imul <= n; imul += (i << 1)){
                isPrime[imul] = false;
            }
        }
    }
    
    for(; i <= n; i += 2){
        if(isPrime[i]){
            primes.push_back(i);
        }
    }    
    return;
}

struct node{
    long long int mul;
    int i, j;
    
    node(long long int m, int ii, int jj){
        mul = m, i = ii, j = jj;
    }
    
    bool operator<(const node &b) const{
        return (mul > b.mul) || (mul == b.mul && i > b.i);
    }
};

int main() {
    long long int n, x, ans;
    const int nmax = 5300000; // 5.3e6
    generatePrimes(nmax);
    // for(auto num: primes) cout << num << " "; cout << endl;
    
    int t = 1;
    cin >> t;
    vector<int> semiPrimes;
    priority_queue<node> pq;
    for(int i = 1; i < primes.size(); i++){
        pq.push(node(primes[i - 1] * primes[i], i - 1, i));
    }
    int cnt = 0;
    semiPrimes.clear();
    while(!pq.empty() && cnt <= 2e6){
        auto cur = pq.top();
        pq.pop();
        cnt++;
        semiPrimes.push_back(cur.mul);
        if(cur.j + 1 < primes.size()){
            pq.push(node(primes[cur.i] * primes[cur.j + 1], cur.i, cur.j + 1));
        }
    }
   
    while(t--){
        cin >> n;
        cout << semiPrimes[n - 1] << '\n';
    }
    return 0;
}
