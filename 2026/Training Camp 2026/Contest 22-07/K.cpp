#include <bits/stdc++.h>
using namespace std;
 
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
#define forr(i,a,b) for(int i = int(a); i < int(b); i++)
#define forn(i,n) forr(i,0,n)
 
int main(){
    ll n; cin >> n;
    ll movs = (n - 11)/2;
 
    string s; cin >> s;
    int cont=0;
    for(ll i = 0; i < (movs*2)+1; i++){
        if (s[i] == '8') cont++;
    }
    if(cont > movs ) cout << "YES" << "\n";
    else cout << "NO" << "\n";
    return 0;
}