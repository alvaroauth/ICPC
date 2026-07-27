#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forr(i,a,b) for(int i = int(a); i < int(b); i++)
#define forn(i,n) forr(i,0,n)

int main(){
	ll t; cin >> t;
	while (t--){
		
		ll n; cin >> n;
		vector<ll> izq(n);
		vector<ll> der(n);
		
		ll roja = 0, azul = 0;
		forn(i, n){
			cin >> izq[i];
			if (izq[i] == 1) roja++;
			else azul++;
		} 
		forn(i, n){
			cin >> der[i];
			if (der[i] == 1) roja++;
			else azul++;
		} 
			
		ll buscado = roja - azul;
		reverse(izq.begin(), izq.end());
		
		vector<ll> contador(n+1);
		map<ll, ll> mapa;
		
		contador[0] = 0;
		for(int i = 1; i <= n; i++){
			if (izq[i-1] == 1)
				contador[i] = contador[i-1] + 1;
			else
				contador[i] = contador[i-1] - 1;
		}
		
		mapa[0] = 0;
		ll dif = 0;
		for(int i = 0; i < n; i++){
			if (der[i] == 1) dif++;
			else dif--;
			if (mapa.count(dif) == 0)
				mapa[dif] = i+1;
		}	
		
		ll mini = 2*n;
		forn(i, n+1){
			if (mapa.count(buscado - contador[i]))
				mini = min(mini, i + mapa[buscado - contador[i]]);
		}
		
		cout << mini << "\n"; 
	}
}
