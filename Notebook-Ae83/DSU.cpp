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

struct DSU {
    vector<ll> link, sz, maxi, mini;

    DSU(int tam) { // 0 indexado
        link.resize(tam+5), sz.resize(tam+5);
        maxi.resize(tam+5); mini.resize(tam+5);
        forn(i, tam+5) link[i] = i, sz[i] = 1, maxi[i] = i, mini[i] = i;
    }

    ll find(ll x){ return link[x] = (link[x] == x ? x : find(link[x])); }
    bool same(ll a, ll b) { return find(a) == find(b); }

    void join(ll a, ll b) {
        a = find(a), b = find(b);
        if(a == b) return;
        if(sz[a] < sz[b]) swap(a,b);
        sz[a] += sz[b];
        maxi[a] = max(maxi[a],maxi[b]);
        mini[a] = min(mini[a],mini[b]);
        link[b] = a;
    }
};