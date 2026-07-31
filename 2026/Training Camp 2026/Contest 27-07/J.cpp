#include <bits/stdc++.h>
using namespace std;
 
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
 
int main(){
	ll t,a,b;
	ll diferencia;
	cin >> t;
	while(t--){
		cin >> a >> b;
		
		if(a== b){
			cout << 0 << "\n";
		}
		else{
			diferencia = abs(a - b);
			ll res = 0;
			 res = diferencia/5;
			ll sobra = diferencia % 5;
			if((sobra == 1) ||(sobra== 2)) res++;
			else if((sobra == 3) ||(sobra == 4)) res+=2;
			cout << res << "\n";
		}	
	}		
}