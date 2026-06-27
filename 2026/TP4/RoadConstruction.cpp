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
const int INF = 1<<30; // const ll INF = (1LL<<60);
const int MOD = 1e9+7;  // const int MOD = 998244353;
const int MAXN  = 2e5+5;

vector<ll> padre, sz;

void initDSU(int tam) {
    padre.assign(tam+5, 0);
    sz.assign(tam+5, 1);
    forn(i, tam+5) padre[i] = i;
}

ll find(ll x){
    return padre[x] = (padre[x] == x ? x : find(padre[x])); 
}

bool same(ll a, ll b) {
     return find(a) == find(b); 
}

ll join(ll a, ll b) {
    a = find(a), b = find(b);
    if(a == b) return sz[a];
    if(sz[a] < sz[b]) swap(a, b);
    sz[a] += sz[b];
    padre[b] = a;
    return sz[a];
}

int main(){
    FIN;
    ll n, m, a, b, maxi = 1;
    cin >> n >> m;
    initDSU(n);
    ll aux = n;
    forn(i, m){
        cin >> a >> b;
        a--;b--;
        if (!(same(a, b))) aux--;
        maxi = max(maxi, join(a, b));
        cout << aux << " " << maxi << "\n";
    }
    return 0;
}