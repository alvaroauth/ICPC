#include <bits/stdc++.h>
using namespace std;
 
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
 
int main() {
	FIN;
	
	ll t,r,g;
	
	cin >> t;
	vector<ll> c(3);
	while(t--){
		cin >> c[0] >> c[1] >> c[2];
		sort(c.begin(), c.end());
		g = c[0] + c[1];
		if(g <= c[2]){
			cout << g << "\n";	
		}
		else{
			r = (g + c[2])/2;
			cout << r << "\n";
		}
		//c.clear();
	}
    return 0;
}