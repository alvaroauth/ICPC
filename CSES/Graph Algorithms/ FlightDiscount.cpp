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

}