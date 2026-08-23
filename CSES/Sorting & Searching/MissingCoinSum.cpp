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
    vector<ll> monedas(n);
    forn(i, n) cin >> monedas[i];

    sort(all(monedas));

    ll puedo = 1;
    ll res = -1;

    forn(i, n){
        if (monedas[i] > puedo) res = puedo;
        if (res != -1) break;
        puedo += monedas[i];
    }
    if (res == -1) res = puedo;
    cout << res << "\n";
}