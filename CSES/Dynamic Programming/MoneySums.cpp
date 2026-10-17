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

void dfs(ll act, ll suma, ll n, vector<ll> &v, set<ll> &s){
    ll sumaOriginal = suma;
    forr(i, act, n){
        suma = sumaOriginal + v[i];
        s.insert(suma);
        dfs(i+1, suma, n, v, s);
    }
}

int main(){
    ll n; cin >> n;
    vector<ll> v(n);
    forn(i, n) cin >> v[i];

    set<ll> sumas;
    dfs(0, 0, n, v, sumas);
    cout << sumas.size() << "\n";
    for(auto num: sumas) cout << num << " ";
    cout << "\n";
}