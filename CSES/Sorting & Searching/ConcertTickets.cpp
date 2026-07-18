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
    ll n, m, aux; cin >> n >> m;

    multiset<ll> precios;

    forn(i, n){
        cin >> aux;
        precios.insert(-aux);
    }

    forn(i, m){
        cin >> aux;
        auto it = precios.lower_bound(-aux);
        if (it != precios.end()){
            cout << (*it * -1) << "\n";
            precios.erase(it);
        }
        else
            cout << "-1" << "\n";
    }
    return 0;
}