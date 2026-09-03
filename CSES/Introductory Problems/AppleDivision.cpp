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

vector<ll> v;

ll dfs(ll i, ll sum, ll mitad, ll n){
    if (i == n) return sum;
    ll maxi = -1;
    maxi = max(maxi, dfs(i + 1, sum, mitad, n));
    if ((sum + v[i]) <= mitad) maxi = max(maxi, dfs(i + 1, sum + v[i], mitad, n));
    return maxi;
}


int main(){
    ll n; cin >> n;
    v.resize(n);

    ll sum = 0;
    forn(i, n) cin >> v[i], sum += v[i];

    ll mitad = sum / 2;
    ll uno = 0;
    forn(i, n)
        uno = max(uno, dfs(i, 0, mitad, n));

    ll dos = (sum - uno);

    ll res = llabs(uno - dos);
    cout << res << "\n";
}