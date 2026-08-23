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
    vector<ll> precios(n);
    forn(i, n) cin >> precios[i];
    sort(all(precios));

    ll q; cin >> q;
    ll x, l, r, med;
    forn(i, q){
        cin >> x;
        l = -1; r = n;
        while (l != r - 1){
            med = (l+r) / 2;
            if (precios[med] > x) r = med;
            else l = med;
        }
        cout << r << "\n";
    }
}