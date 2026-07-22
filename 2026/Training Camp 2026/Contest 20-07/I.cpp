#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
#define forr(i,a,b) for(int i = int(a); i < int(b); i++)
#define forn(i,n) forr(i,0,n)

int main(){
    ll t; cin >> t;

    while (t--){
        ll n, a, b, c, d; cin >> n >> a >> b >> c >> d;

        bool puede = false;
        ll menor = n*(a-b), mayor = n*(a+b);
        if (menor < (c-d) && (mayor > (c + d))) puede = true;
        if (((menor >= (c - d))&&(menor <= (c + d))) || ((mayor <= (c + d))&&(mayor >= (c - d)))) puede = true;
        if (puede) cout << "Yes";
        else cout << "No";
        cout << "\n";
    }
}