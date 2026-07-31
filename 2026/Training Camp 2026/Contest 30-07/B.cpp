#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;
#define forr(i, a, b) for (ll i = (a); i < (ll)(b); i++)
#define forn(i, n) forr(i, 0, n)

int main(){
	ll n; cin >> n;
	vector<int> v,v2,vmini;
	int a,b,mini;
	int n2=n;
	while(n2--){
		cin >> a >> b;
		mini = max(a,b);
		vmini.push_back(mini);
		v.push_back(a);
		v2.push_back(b);
		
	}
	bool puedo = true;
	v2[0] = max(v2[0], v[0]);
	for(int i = 1; i<n;i++){
		if (((v2[i-1]-v[i]) >= 0)&&((v2[i-1]-v2[i]) < 0)){
			v2[i] = v[i];
		}
		else if (((v2[i-1]-v2[i]) >= 0)&&((v2[i-1]-v[i]) >= 0)){
			if ((v2[i-1]-v[i]) < (v2[i-1]-v2[i]))
				v2[i] = v[i];
		}
				
		if (v2[i-1] < v2[i]){
			puedo = false;
			break;
		}
	}
	
	if (puedo) cout << "YES\n";
	else cout << "NO\n";
}
