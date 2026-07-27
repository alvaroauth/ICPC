#include <bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
#define forr(i,a,b) for(int i = int(a); i < int(b); i++)
#define forn(i,n) forr(i,0,n)

char minimo(vector<vector<pair<char, ll>>> &g, vector<ll> &distN, ll nivel, ll distTotal, queue<ll> &cola){
	char mini = CHAR_MAX;
	queue<ll> cola2 = cola;
	ll act = cola2.front(); cola2.pop();
	while (act != -1){
		for(auto [car, hijo] : g[act])
			if ((distN[hijo] + nivel + 1) == distTotal)
				mini = min(mini, car);
		act = cola2.front(); cola2.pop();
	}
	return mini;
}	

int main(){
	ll n, m; cin >> n >> m;
	
	vector<vector<pair<char, ll>>> g(n+7);
	vector<ll> distN(n+7, -1), padre(n+7, -1);
	vector<bool> visto(n+7, false), visto2(n+7, false);
	
	ll a, b; char c;
	forn(i, m){
		cin >> a >> b >> c;
		g[a].push_back({c, b});
		g[b].push_back({c, a});
	}
	
	queue<ll> cola;
	cola.push(n);
	cola.push(-1);
	
	visto[n] = true;
	
	ll nivel = 0;
	while (cola.size() > 0){
		ll act = cola.front(); cola.pop();
		if (act != -1){
			distN[act] = nivel;
			for(auto [car, hijo] : g[act]){
				if (!visto[hijo]){
					visto[hijo] = true;
					cola.push(hijo);
				}
			}
		}
		else if (cola.size() > 0){
			cola.push(-1);
			nivel++;
		}
	}
	
	queue<ll>().swap(cola);
	cola.push(1);
	cola.push(-1);
	visto2[1] = true;
	nivel = 0;
	ll distTotal = distN[1];
	string st = "";
	ll mini = minimo(g, distN, nivel, distTotal, cola); 
	
	while(cola.size() > 0){
		ll act = cola.front(); cola.pop();	
		
		if (act != -1){
			for(auto [car, hijo] : g[act]){
				if ((!visto2[hijo]) && ((distN[hijo] + nivel + 1) == distTotal) && (car == mini)){
					cola.push(hijo);
					visto2[hijo] = true;
					padre[hijo] = act;
				}
			}
		}
		else if (cola.size() > 0){
			st += mini;
			cola.push(-1);
			nivel++;
			mini = minimo(g, distN, nivel, distTotal, cola);
		}
	}
	
	stack<ll> camino;
	camino.push(n);
	ll act = n;
	while (padre[act] != -1){
		act = padre[act];
		camino.push(act);
	}
	cout << camino.size()-1	 << "\n";
	while (camino.size() > 0){
		cout << camino.top() << " ";
		camino.pop();
	}
	cout << "\n";
	cout << st << "\n";
}
