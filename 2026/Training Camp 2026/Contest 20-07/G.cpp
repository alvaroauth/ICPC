#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
#define forr(i,a,b) for(int i = int(a); i < int(b); i++)
#define forn(i,n) forr(i,0,n)

int main(){

    ll t; cin >> t;
    while (t--){
        ll n; cin >> n;

        if (n == 0 || n == 1 || n == 2) cout << 0 << "\n";
        else{
            if (n % 2 == 0) n --;
            n = n / 2;
            cout << n << "\n";
        }
    }

}