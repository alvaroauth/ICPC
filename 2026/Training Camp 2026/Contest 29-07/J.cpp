#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;
#define forr(i, a, b) for (ll i = (a); i < (ll)(b); i++)
#define forn(i, n) forr(i, 0, n)

int main(){
	ll n, v; cin >> n >> v;
	vector<int> compradores;
	forn(i, n){
		ll cant, precio; cin >> cant;
		bool compre = false;
		forn(j, cant){
			cin >> precio;
			if ((v > precio)&&(!compre)){
				compre = true;
				compradores.push_back(i+1);
			}
		}
	}
	sort(compradores.begin(), compradores.end());
	cout << compradores.size() << "\n";
	forn(i, compradores.size()) cout << compradores[i] << " ";
	cout << "\n";
}
