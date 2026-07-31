
#include <bits/stdc++.h>
using namespace std;
 
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
 
int main() {
	FIN;
	ll n;
	cin >> n;
	    cin >> n;
	vector<vector<char>> m(n, vector<char>(n));
    	ll cont = 0;
    	for(ll i=0; i < n; i++){
    	    for(ll j=0; j<n; j++){
    	        if ((i + j) % 2 == 0) {
    	            cont++;
    	            m[i][j] = 'C';
    	        } else m[i][j] = '.';
    	    }
 
    	}
        
	
	
	cout << cont << "\n";
	for(ll i=0; i<n; i++){
	    for(ll j=0; j<n; j++){
	        cout << m[i][j];
	    }
	    cout << "\n";
	}
 
	
	return 0;
}