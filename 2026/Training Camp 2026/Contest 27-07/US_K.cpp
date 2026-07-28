#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
#define forr(i,a,b) for(int i = int(a); i < int(b); i++)
#define forn(i,n) forr(i,0,n)

int main(){
    ll n; cin >> n;
    string st; cin >> st;
    vector<ll> plataf;

    forn(i, n){
        if (st[i] == '*')
            plataf.push_back(i);
    }

    bool cumple = false;
    for(auto p : plataf){
        ll salto = 1;

        for(int j = p; j < n; j++){
            ll cont = 0;

            for(int s = p+salto; s < n; s+=salto){
                if (st[s] == '.') break;
                else cont++;
            }

            if (cont >= 4){
                cumple = true;
                break;
            }
            salto++;
        }
        if (cumple) break;
    }    
    if (cumple) cout << "yes" << "\n";
    else cout << "no" << "\n";
}