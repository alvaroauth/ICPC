#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 
int main() {
    int n, m;
    
    ll aux = -1;
	cin >> n >> m;
	multiset<pair<ll, bool>> ms;
	
	for (int i = 0; i < n; i++){
	    cin >> aux;
	    ms.insert({aux, true});
	}
	
	for(int i = 0; i < m; i++){
	    cin >> aux;
	    ms.insert({aux+1, false});
	}
	
	ll c = m, v = 0;
	
	ll resul = -1;
	for( auto elem : ms){
        if (elem.second){
            v += 1;
        }
        else{
            c -= 1;
        }

        if (v >= c){
            resul = elem.first;
            break;
        }
    }
	cout << resul << endl;
}