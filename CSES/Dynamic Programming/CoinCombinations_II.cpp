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
const ll INF = 1e6 + 5;
const ll MOD = 1e9+7;

int main(){
    ll n, x; cin >> n >> x;
    vector<ll> maneras(x+1, 0);
    set<ll> monedas;

    forn(i, n){
        ll aux; cin >> aux;
        if (aux <= x){
            maneras[aux]++;
            monedas.insert(aux);
        }
    }

    forr(i, 1, x+1){
        for(auto m : monedas){
            ll busc = i - m;
            if (busc < 0) break;
            if (busc < m) break;

            // cout << "I: " << i << "   Buscado: " << busc << "   maneras[i]: " << maneras[i] << "   maneras[busc]: " << maneras[busc] << endl;
            maneras[i] = maneras[busc] + maneras[i];
            if (maneras[i] >= MOD) maneras[i] -= MOD;
        }
    }
    // cout << maneras[] << endl;
    cout << maneras[x] << "\n";
}