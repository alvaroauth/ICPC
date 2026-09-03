#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forr(i, a, b) for(int i=(a); i < (int)(b); i++)
#define forn(i, n) forr(i, 0, n)
typedef vector<int> vi;
typedef vector<ll> vll;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
 
int main(){
	FIN;
	ll n; cin >> n;
	vector<ll> v1(n + 1);
	vector<ll> v2(n + 1);
	ll minBe = 1e9+5, maxAa = -1e9-5;
	forn(i, n) cin >> v1[i], maxAa = max(maxAa, v1[i]);
	forn(i, n) cin >> v2[i], minBe = min(minBe, v2[i]);
	
	ll aux = max(0LL, maxAa);
	aux = min(aux, minBe);
	if (maxAa < minBe) cout << aux << "\n";
	else{
		
		v1[n] = v1[n-1]; v2[n] = 1e9+5;
		ll maxi = -1e9-5, minB = 1e9+5, minAux; 
		for(ll i = n; i >= 0; i--){
			if (i != n) minB = min(minB, v2[i+1]);
			minAux = min(v1[i], minB);
			maxi = max(maxi, minAux);
		}
		
		cout << maxi << "\n";
	}
}