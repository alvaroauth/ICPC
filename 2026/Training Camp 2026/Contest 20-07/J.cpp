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

void join(ll a, ll b) {
    a = find(a), b = find(b);
    if(a == b) return;
    if(sz[a] < sz[b]) swap(a, b);
    sz[a] += sz[b];
    padre[b] = a;
}

int main(){
    ll n; cin >> n;

    initDSU(n);
    vector<vector<ll>> pos(n, vector<ll>(2));
    set<ll> faltaAnt, faltaSig;

    forn(i, n){
        ll a, b; cin >> a >> b;
        a--; b--;
        pos[i][0] = a;
        pos[i][1] = b;
        if (a != -1) join(i, a);
        else faltaAnt.insert(i);
        if (b != -1) join(i, b);
        else faltaSig.insert(i);
    }

    while ((faltaAnt.size() > 1)&&(faltaSig.size() > 1)){
        auto ant = faltaAnt.begin();
        auto sig = faltaSig.begin();

        while (same(*sig, *ant))
            sig++;
        
        pos[*ant][0] = *sig;
        pos[*sig][1] = *ant;
        join(*ant, *sig);

        faltaAnt.erase(ant);
        faltaSig.erase(sig);
    }

    forn (i, n){
        cout << pos[i][0]+1 << " " << pos[i][1]+1 << "\n";
    }
}