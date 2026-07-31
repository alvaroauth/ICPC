#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;
#define forr(i, a, b) for (ll i = (a); i < (ll)(b); i++)
#define forn(i, n) forr(i, 0, n)


int main(){
    int n;
    string st;
    cin  >> n;
    cin >> st;
    
    vector<string> casos = {"RGB", "RBG", "BGR", "BRG", "GRB", "GBR"};
    vector<ll> cont(6, 0);

	forn(i, n){
		forn(j, 6){
			if (casos[j][i%3] != st[i]) cont[j]++;
		}
	}

	ll posmin = 0;
	for(int i = 1; i < 6; i++){
		if (cont[i] < cont[posmin]) posmin = i;
	} 

	cout << cont[posmin] << "\n";
	for(int i = 0; i < n; i++){
		cout << casos[posmin][i%3];
	}
	cout << "\n";
}

