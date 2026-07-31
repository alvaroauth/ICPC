#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;
#define forr(i, a, b) for (ll i = (a); i < (ll)(b); i++)
#define forn(i, n) forr(i, 0, n)


int main(){
    int n,a;
    cin  >> n;
    vector<int> v(n+4);
    multiset<int> s;
    
    for(int i = 0; i < n ; i++){
		cin >> a;
		s.insert(a);
		v[i] = a;
		
	}
	int j=-1,k=-1, pos =-1;
	int suma;
	bool puedo = false;
	for(int i = 0; i< n; i++){
		for(int j2= 0; j2<n; j2++){
			if (j2 != i){
				suma = v[i] +v[j2];
				if(s.find(suma) != s.end()){
					puedo = true;
					j = i+1;
					k = j2+1;
					//~ cout << k << " " << "j " << j << endl;
					//~ cout << suma;
					break;
				}
			}
		}
		if(puedo) break;
	}
	if (puedo)
		suma = v[j-1] + v[k-1];
	//~ cout << "suma: " << suma << endl;
	for(int i = 0; i< n; i++){
		if(v[i] == suma){
			pos = i+1;
			break;
		}
	}
	
	//~ cout << pos << " " << j << " " << k << endl;
	//~ cout << suma << endl;
	if(pos != -1) cout << pos << " " << j << " " << k << endl;
	else cout << -1 << endl;
}
