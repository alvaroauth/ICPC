#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forr(i, a, b) for(ll i = (a); i < (ll)(b); i++)
#define forn(i, a) forr(i, 0, a)
#define pb push_back

ll unoe(ll n){
    ll res = 1;
    forn(i, n) res *= 10;
    return res;
}

int main(){
    ll t; cin >> t; 
    while (t--){
        string s; cin >> s; ll n = s.size();
        cout << ((unoe(n)) + 1) << "\n";
    }
}