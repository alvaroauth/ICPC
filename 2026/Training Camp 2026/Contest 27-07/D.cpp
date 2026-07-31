
#include <bits/stdc++.h>
using namespace std;
 
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;
int main() {
	ll n,a,n2;
	cin >> n;
	n2 = n;
	vector<ll> v;
	while(n2--){
		cin >> a;
		v.push_back(a);
		
	}
	ll maxi = 0;
	for(int i = 0; i< n;i++){
		maxi = max(maxi,v[i]);
	}
	ll i= 0;
	ll aux;
	ll res = 1;
	while(i < n){
		aux =0;
		while ((i < n) && (maxi == v[i])){
			aux++;
			i++;
		}
		res = max(res,aux);
		aux = 0;
		i++;
	}
	
	cout << res << "\n";
   return 0;
}
