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
    ll t; cin >> t;
    while(t--){
        ll n,q; cin >> n >> q;
        vector<ll> v1(n); vector<ll> v2(n);

        forn(i,n) cin >> v1[i];
        forn(i,n) cin >> v2[i];
        vector<ll> maxis(n);
        ll maxi = -1; ll aux;

        for(ll i = n-1; i>=0; i--){
            aux = max(v1[i],v2[i]);
            maxi = max(maxi,aux);
            maxis[i]= maxi;
        }
        vector<ll> sumaprex(n); ll suma =0;
        forn(i,n) {
            suma += maxis[i];
            sumaprex[i]= suma;
        }
        ll l,r;
        forn(i,q){
            cin >> l >> r;
            ll dif = sumaprex[r]-sumaprex[l-1];
            cout << dif << "\n";
        }
    }
}