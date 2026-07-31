#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;

int main() {
    FIN;
	ll n; cin >> n;
	vector<ll> v(n);
	for(int i = 0; i < n; i++){
	    cin >> v[i];
	}
	
	sort(v.begin(), v.end());
	if (n%2!=0)
	    cout << v[(n/2)];
	else
	    cout << v[(n/2)-1];
}
