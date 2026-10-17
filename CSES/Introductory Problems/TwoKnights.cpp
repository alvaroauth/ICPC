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
const ll MOD = 1e9 + 7;

int main(){
    ll n; cin >> n;
    forr(i, 1, n+1){
        ll k2 = i * i;
        ll total = k2 * (k2 - 1) / 2;
        ll ataques = 4 * (i-1) * (i-2);
        cout << total - ataques << "\n";
    }
}