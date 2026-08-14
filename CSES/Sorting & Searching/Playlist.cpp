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

int main(){
    ll n; cin >> n;

    vector<ll> cancion(n);
    map<ll, ll> ult;
    forn(i, n) cin >> cancion[i];

    ll prim = 0;
    ll cont = 1, maxi = 1;

    ult[cancion[0]] = 1;
    forr(i, 1, n){
        if (ult[cancion[i]] > prim){
            cont -= ult[cancion[i]] - prim - 1;
            prim = ult[cancion[i]];
        }
        else cont++;
        maxi = max(maxi, cont);
        ult[cancion[i]] = i + 1;
    }

    cout << maxi << "\n";
}