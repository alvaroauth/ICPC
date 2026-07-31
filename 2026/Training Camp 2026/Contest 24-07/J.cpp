#include <bits/stdc++.h>
using namespace std;
 
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
 
int main(){
	ll t, n,a,suma=0;
	cin >> t;
	while(t--){
		cin >> n;
		ll n2 = n;
		while(n2--){
			cin >> a;
			suma +=a;
		}
		if(suma %n ==0){
			cout << "0" << "\n";
		}			
		else cout << "1" << "\n";
		suma = 0;
	}
	return 0;
}
