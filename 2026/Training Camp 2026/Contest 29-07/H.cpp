#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;

int main() {
    FIN;
	ll n; cin >> n;
	
	ll total = 0, aux;
	for(int i = 0; i < n; i++){
	    cin >> aux;
	    total += abs(aux);
	}
    cout << total << "\n";
}
