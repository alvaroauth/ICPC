#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forr(i, a, b) for(ll i = (a); i < (ll) (b); i++)

const ll INF = 1e18;
vector<ll> min_prime; // min_prime[i] contiene el menor primo que divide a i, util para factorizar en log(i)

vector<ll> criba(ll n) {
    vector<bool> prime(n+1,true);
    min_prime.resize(n+1,INF);
    vector<ll> primos;
    for(ll p=2; p*p<=n; p++){
        if(!prime[p]) continue;
        for(ll i=p*p; i<=n; i += p) {
            prime[i] = false;
            min_prime[i] = min(min_prime[i],p);
        }
    }
    forr(i, 2, n+1){
        if(prime[i]) primos.push_back(i), min_prime[i] = i;
    }
    return primos; // lista de primos hasta n
}