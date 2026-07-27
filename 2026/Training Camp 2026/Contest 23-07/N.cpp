#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;


int main() {
	FIN;
	ll n, x;
	cin >> n;
	vector<ll> e;
	vector<ll> ord;
	for(ll i=0; i<n; i++){
	    cin >> x;
	    e.push_back(x);
	    ord.push_back(x);
	}
	sort(ord.begin(), ord.end());
	ll cont = 0;
	for(ll i=0; i<n; i++){
	    if (e[i] != ord[i]) cont++;
	}
	if (cont > 2) cout << "NO" << "\n";
	else cout << "YES" << "\n";
    return 0;
}
