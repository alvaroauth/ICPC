#include <bits/stdc++.h>
using namespace std;

int MAXN = 1e5+5;

vector<int> isla;
vector<vector<int>> g(MAXN);
vector<bool> visto(MAXN, false);

void dfs(int i){
    visto[i] = true;
    for (auto elem : g[i]){
        if (!visto[elem]) dfs(elem);
    }
}

int main() {
	int n, m;
	cin >> n >> m;
	int a, b;
	int cont = 0;
	for (int i = 0; i < m; i++){
	    cin >> a >> b;
	    a--; b--;
	    g[a].push_back(b);
	    g[b].push_back(a);
	}
	
	for (int i = 0; i < n; i++){
	    if (!visto[i]){
	        isla.push_back(i);
	        dfs(i);
	        cont++;
	    }
	}
	cout << cont - 1 << "\n";
	if (cont > 1){
	    for (int i = 1; i < cont; i++){
	        cout << (isla[0] + 1) << " " << (isla[i] + 1) << "\n";
	    }
	}
}