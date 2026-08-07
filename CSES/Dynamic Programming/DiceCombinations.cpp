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

const ll MOD = 1e9 + 7;

void aumentarRango(vector<ll> &v, int i){
    v.push_back((v[i-1] + v[i-2] + v[i-3] + v[i-4] + v[i-5] + v[i-6]) % MOD);
}

void inicializar(vector<ll> &v){
    v[0] = 0;
    v[1] = 1;
    v[2] = 2;
    v[3] = 4;
    v[4] = 8;
    v[5] = 16;
    v[6] = 32;
}

int main(){
    ll n; cin >> n;

    vector<ll> v(7);
    inicializar(v);
    forr(i, 7, n+1){
        aumentarRango(v, i);
    }

    cout << v[n] << "\n";
}