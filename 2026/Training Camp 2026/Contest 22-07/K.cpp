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
    vector<ll> dist;
    ll ocho = 0, cars = 0; 
    for(ll i = 0; i < n; i++){
        if (s[i] == '8') dist.push_back(i);
    }

    bool cumple = true;
    if (dist.size() == 0) cumple = false;
    else if (dist.size() < movs) cumple = false;
    else{
        
    }
}