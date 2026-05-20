#include <bits/stdc++.h>
using namespace std;
const long long MAXN = 1e5 + 5;
vector<vector<int>> g(MAXN);
vector<bool> visto(MAXN, false);
vector<int> resul;
vector<int> resulFinal(MAXN);


void dfs (int i, int n){
	visto[i] = true;
	resul.push_back(i+1);
	
	if ((i == n - 1)&&(resul.size() < resulFinal.size()))
		resulFinal = resul;
	else{
		for (auto hijo : g[i]){
			if (!visto[hijo])
				dfs(hijo, n);
		}
	}	
	resul.pop_back();
	visto[i] = false;
}

int main() {
    int n, m;
    cin >> n >> m;   
    for (int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        a--; b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    
	dfs(0, n);
	
	if (resul.size() != MAXN){
		cout << resulFinal.size() << "\n";
		for (long unsigned j = 0; j < resulFinal.size(); j++) cout << resulFinal[j] << " ";
	}
	else cout << "IMPOSSIBLE";
	cout << "\n";
	return 0;
}
