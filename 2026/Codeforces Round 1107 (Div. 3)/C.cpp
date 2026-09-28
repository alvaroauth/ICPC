#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forr(i, a, b) for(ll i = (a); i < (ll)(b); i++)
#define forn(i, a) forr(i, 0, a)
#define pb push_back

int main(){
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        string s; cin >> s;
        char act = s[0];
        ll cambios = 0;

        forr(i, 1, n){
            if (s[i] != act){
                cambios++;
                act = s[i];
            }
        }
        if (cambios == 1) cout << 2 << "\n";
        else cout << 1 << "\n";
    }
}