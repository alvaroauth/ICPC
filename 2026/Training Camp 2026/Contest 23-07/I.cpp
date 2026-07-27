#include <bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
#define forr(i,a,b) for(int i = int(a); i < int(b); i++)
#define forn(i,n) forr(i,0,n)

int main(){
    ll t; cin >> t;
    while (t--){
        ll l, r;
        cin >> l >> r;

        if ((l*2) <= r) cout  << l << " " << (l*2) << "\n";
        else cout << "-1 -1" << "\n";
    }
}