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
    FIN;
    ll t; cin >> t;
    while(t--){
        ll n, m, aux; cin >> n >> m;
        
        vector<ll> prefix(n+1);
        prefix[0] = 0;
        forn(i, n) cin >> aux, prefix[i+1] = prefix[i] + aux;

        vector<ll> q(m);
        forn(i, m) cin >> q[i];
        q.push_back(0);
        sort(all(q));

        ll suma = 0;
        forn(i, m){
            ll a = q[i], b = q[i+1];
            suma += llabs(prefix[b] - prefix[a]);
        }
        
        suma += prefix[n] - prefix[q[m]];
        cout << suma << "\n";
    }
}