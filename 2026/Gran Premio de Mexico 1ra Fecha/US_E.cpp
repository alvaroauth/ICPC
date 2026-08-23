#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define forr(i, a, b) for(ll i = (a); i < (ll) (b); i++)
#define forn(i, n) forr(i, 0, n)
#define SZ(x) int((x).size())
#define pb push_back
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define esta(x,c) ((c).find(x) != (c).end())

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
        if(prime[i]) primos.pb(i), min_prime[i] = i;
    }
    return primos; // lista de primos hasta n
}

vector<ll> queries;
vector<ll> cri;

void dfs(ll padre, ll num, ll &i, ll n){
    queries[i] = num;
    for(ll j = padre; j < cri.size(); j++){
        if ((num*cri[j]) <= n) dfs(j, (num*cri[j]), ++i, n);
        else break;
    }
}

int main(){
    FIN;
    ll n, m; cin >> n >> m;

    queries.resize(n+1);
    cri = criba(n+1);
    ll i = 1;
    dfs(0, 1, i, n);

    forn(i, m){
        ll pos; cin >> pos;
        cout << queries[pos] << "\n";
    }
}