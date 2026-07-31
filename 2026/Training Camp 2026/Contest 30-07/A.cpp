
#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;
#define forr(i, a, b) for (ll i = (a); i < (ll)(b); i++)
#define forn(i, n) forr(i, 0, n)

int main(){
	ll t; cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> v(n);
		vector<int> prefix(n+1,0);
		prefix[0] = 0;
		for(int i = 1; i < n+1; i++){
			prefix[i] = i + prefix[i-1];
		}
		for(int i = 0; i < n; i++){
			cin >> v[i];
		}
		ll suma = 0;
		bool puedo = true;
		for(int i = 0; i< n; i++){
			suma += v[i];
			if(suma < prefix[i]){
				puedo = false;
				break;
			}
		}
		if(puedo ) cout << "yes" << "\n";
		else cout << "no" << "\n";
	}
	return 0;
}
