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

const ll INF = 1LL<<60;
vector<vector<pair<ll,ll>>> ady;   // g[u] = lista de {vecino, peso}

struct DSU {
    vector<ll> link, sz, maxi, mini;
    ll n;

    DSU(int tam) { // 0 indexado
        n = tam+5;
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

    vector<ll> componentesConexas(){
        vector<ll> res;
        forn(i, n){
            if (link[i] == i) res.pb(i);
        }
        return res;
    }

    ll tamanio(ll a){
        a = find(a);
        return sz[a];
    }
};

vector<ll> Dijkstra(int start, int n) {
	vector<ll> dist(n, INF);
	priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;
	pq.push({0, start});
	
	while(!pq.empty()) {
		auto [d, cur] = pq.top(); pq.pop();
		if(dist[cur] != INF) continue;
		dist[cur] = d;
		for(auto [next, w] : ady[cur]) {
			if(dist[next] == INF) {
				pq.push({d + w, next});
			}
		}
	}
	return dist;
}

int main(){
    ll n, m, q; cin >> n >> m >> q;
    ady.resize(n+1);
    DSU dsu(n);
    forn(i, m){
        ll a, b, c; cin >> a >> b >> c;
        a--; b--;
        ady[a].pb({b, c});
        ady[b].pb({a, c});
        dsu.join(a, b);
    }

    vector<ll> cc = dsu.componentesConexas(); 
    vector<vector<ll>> dij(cc.size());
    forn(i, cc.size()){
        dij[i] = Dijkstra(cc[i], dsu.tamanio(cc[i]));
    }

    forn(i, q){
        ll a, b; cin >> a >> b;
        a--; b--;
        if (!dsu.same(a, b)) cout << -1 << "\n";
        else {
            if (a > b) swap(a, b);
            ll padre = dsu.find(a);
            if (dij[padre][b] == INF) cout << -1 << "\n";
            else{
                cout << dij[padre][b] - dij[padre][a] << "\n";
            }
        }
    }
}