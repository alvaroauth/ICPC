#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define forr(i, a, b) for(ll i = (a); i < (ll) (b); i++)
#define forn(i, n) forr(i, 0, n)
#define SZ(x) int((x).size())
#define pb push_back
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define esta(x,c) ((c).find(x) != (c).end())


int main(){
    ll w, h, n;
    cin >> w >> h >> n;

    ll l = 0, r = 1e18;
    while (l+1 < r){
        ll med = (l+r)/2;
        ll ancho = med/w;
        ll alto = med/h;
        if((ancho >= n) and (alto >=1)){
            r = med;
        }
        else if((alto >= n) and (ancho >=1)){
            r = med;
        }
        else{
            ll mult = ancho * alto;
            if(mult >= n){
                r = med;
            }
            else{
                l = med;
            }
        }
    }
    cout << r << "\n";  
}