# include <bits/stdc++.h>
using namespace std;

const long long MAXN = 1e5 + 5;
vector<vector<int>> g(MAXN);
vector<int> padre(MAXN, -1);
vector<bool> visto(MAXN, false);


int main(){
	
	int n, m;
    cin >> n >> m;   
    for (int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        a--; b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
	
	queue<int> q;
	q.push(0);
	visto[0] = true;
	bool encontre = false;
	stack<int> camino;
	while (q.size() > 0){
		auto act = q.front(); q.pop();
		if (act != n - 1){
			for (auto ady : g[act]){
				if (!visto[ady]){
					padre[ady] = act;
					visto[ady] = true;
					q.push(ady);
				}
			}
		}
		else{
			encontre = true;
			while (padre[act] != -1){
				camino.push(act + 1);
				act = padre[act];
			}
			camino.push(1);
		}
	}
	if (encontre){
		cout << camino.size() << "\n";
		while (camino.size() > 0){
			cout << camino.top() << " ";
			camino.pop();
		}
	}
	else cout << "IMPOSSIBLE";
	cout << "\n";
	return 0;
}
