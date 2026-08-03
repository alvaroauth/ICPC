#include <bits/stdc++.h>
using namespace std;
 
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;
#define forr(i, a, b) for (ll i = (a); i < (ll)(b); i++)
#define forn(i, n) forr(i, 0, n)
 
vector<bool> visto(1007, false);

vector<vector<int>> ady(1007);
set<pair<int, int>> aristas;
set<int> comp;
 
void dfs(int p, int prev){
    visto[p] = true;

	for(int vecino : ady[p]){
        if (vecino == prev) continue;
	    if (!visto[vecino]){
            dfs(vecino, p);
		}
		else{
			ll mi = min(vecino, p), ma = max(vecino, p);
			aristas.insert({mi, ma});
		}
	}
}
 
int main(){
	int n; cin >> n;
	forn(i, n-1){
		int a, b; cin >> a >> b;
		a--;b--;
        ady[b].push_back(a);
        ady[a].push_back(b);
    }
	
	
	forn(i, n){
		if (!visto[i]){
			dfs(i, i);
			comp.insert(i);
		}
	}
	auto it = comp.begin();
	auto sig = it;
	sig++;
	auto it2 = aristas.begin();
	cout << comp.size()-1 << "\n";
	while(sig != comp.end()){
		cout << ((it2->first)+1) << " " << ((it2->second)+1) << " " << ((*it)+1) << " " << ((*sig)+1) << "\n";
		it++;
		sig++;
		it2++;
	}
}