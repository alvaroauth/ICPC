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
    ll n, c, k; cin >> n >> c >> k;
    vector<ll> dias(n);
    vector<ll> mini(n);
 
    forn(i, n) cin >> dias[i];
    mini[0] = c+k;
    forr(i, 1, n)
        mini[i] = min(((dias[i]-dias[i-1])*c), c+k);
    
    ll sum = 0;
    forn(i, n) sum += mini[i];
    cout << sum << "\n";
}
