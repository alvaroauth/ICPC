#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
#define forr(i,a,b) for(int i = int(a); i < int(b); i++)
#define forn(i,n) forr(i,0,n)

bool mismaCantidad(map<char, ll> uno, map<char, ll> dos){
    for(auto par : uno)
        if (uno[par.first] != dos[par.first]) return false;
    return true;
}

int main(){
    ll t; cin >> t;
    while (t--){
        string ori;
        cin >> ori;
    
        string res;
        cin >> res;
    
        ll n = ori.length();
        map<char, ll> let;
    
        for(char s : ori){
            let[s]++;
        }
        bool cumple = false;
        if (n > res.length()) cout << "NO" << "\n";
        else{
            for(ll i = 0; i < (res.length() - n + 1); i++){
                map <char, ll> aux;
                for(ll j = i; j < n+i; j++){
                    aux[res[j]]++;
                }
                if (mismaCantidad(let, aux)){
                    cumple = true;
                    break;
                }
            }
            if (cumple) cout << "YES";
            else cout << "NO";
            cout << "\n";
        }
    }
}