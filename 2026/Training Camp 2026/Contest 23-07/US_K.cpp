#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi; typedef pair<ll,ll> ii;
typedef vector<ii> vii; typedef vector<bool> vb;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define forr(i, a, b) for(ll i = (a); i < (ll) (b); i++)
#define forn(i, n) forr(i, 0, n)
#define SZ(x) int((x).size())
#define pb push_back
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define esta(x,c) ((c).find(x) != (c).end())


int main(){
	FIN;
	ll t; cin >> t;
	while(t--){
		ll n, k; cin >> n >> k;
	
		vector<ll> vec(n+1), prefix(n+1);
		vector<ll> b(n+1), bmax(n+1);
		
		prefix[0] = 0;
		forn(i, n){
			cin >> vec[i];
			prefix[i+1] = prefix[i] + vec[i];
		}
		
		bmax[0] = -1;
		forn(i, n){
			cin >> b[i];
			bmax[i+1] = max(b[i], bmax[i]);
		}
		
		ll i = 1;
		ll maxi = 0;
		while (i <= k){
			ll indi = min(i, n);
			
			if (maxi < (prefix[indi] + bmax[indi]*(k-i)))
				maxi = prefix[indi] + bmax[indi]*(k-i);
			
			i++;
		}
		
		cout << maxi << "\n";
	}
}
