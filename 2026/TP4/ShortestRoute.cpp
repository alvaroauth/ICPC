#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0)
#define forr(i,a,b) for(int i = int(a); i < int(b); i++)
#define forn(i,n) forr(i,0,n)
#define pb push_back
const int MAXN = 2e5+5;
const ll INF = 1LL<<60;

vector<vector<pair<ll,ll>>> g(MAXN);

vector<ll> Dijkstra(int start, int n) {
	vector<ll> dist(n, INF);
	priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;
	pq.push({0, start});
	while(!pq.empty()) {
		auto [d, cur] = pq.top(); pq.pop();
		if(dist[cur] != INF) continue;
		dist[cur] = d;
		for(auto [next, w] : g[cur]) {
			if(dist[next] == INF) {
				pq.push({d + w, next});
			}
		}
	}
	return dist;
}

int main(){
    int n, m, a, b, w;
    cin >> n >> m;
    forn(i, m){
        cin >> a >> b >> w;
        a--; b--;
        g[a].pb({b, w});
    }
    vector<ll> dij = Dijkstra(0, n);
    for(auto e : dij) cout << (e) << " ";
    cout << "\n";
    return 0;
}