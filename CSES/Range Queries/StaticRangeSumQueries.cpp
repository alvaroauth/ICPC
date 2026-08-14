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
    ll n, q; cin >> n >> q;
    vector<ll> sum(n+1);

    sum[0] = 1;
    forr(i, 1, n+1){
        ll aux; cin >> aux;
        sum[i] = sum[i - 1] + aux;
    }

    forn(i, q){
        ll l, r; cin >> l >> r;
        cout << sum[r] - sum[l-1] << "\n";
    }
}