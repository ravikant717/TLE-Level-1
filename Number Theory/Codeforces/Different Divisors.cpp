#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int d; 
    cin >> d; 
    vector<ll> primes; 
    for(int i = 2; i <= 10000; i++) {
        bool is_prime = true; 
        //SQRT Method for prime check
        for(ll j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                is_prime = false; 
                break; 
            }
        }
        if(is_prime) primes.push_back(i); 

    }
    ll p = *lower_bound(primes.begin(), primes.end(), d + 1); 
    ll q = *lower_bound(primes.begin(), primes.end(), d + p); 
    ll a = min(p * q, p * p * p); 

    cout << a << "\n"; 
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t; 

    while(t--) {
        solve(); 

    } 
    return 0;
}