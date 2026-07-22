#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
#define forr(i,a,b) for(int i = int(a); i < int(b); i++)
#define forn(i,n) forr(i,0,n)

int main(){
    ll t; cin >> t;
    while(t--){
        ll n, a, b; cin >> n >> a >> b;

        string res = "";
        char ult = 'a' + b -1;
        ult = min(int(ult), int('z'));

        for (char c = 'a'; c <= ult; c++){
            res += c;
        }

        ll aux = n / b;
        string resultado = "";
        forn(i, aux){
            resultado += res;
        }

        forn(i, n % b){
            resultado += res[i];
        }

        cout << resultado << "\n";
    }
}