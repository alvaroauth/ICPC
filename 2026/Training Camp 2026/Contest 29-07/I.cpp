#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;
#define forr(i, a, b) for (ll i = (a); i < (ll)(b); i++)
#define forn(i, n) forr(i, 0, n)


int main() {
	ll n; cin >> n;
	ll a, b, c; cin >> a >> b >> c;
	ll minAB = min(a, b);
	ll total = 0;
	if (n > 1){
    	if (c < minAB){
    	    total += minAB;
    	    total += c*(n-2);
    	}
    	else{
    	    total += (minAB)*(n-1);
    	}
    }
        
	cout << total << "\n";

}
