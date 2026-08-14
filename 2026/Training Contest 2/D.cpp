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

void nespacios(int n){
    forn(i, n) cout << " ";
}

void ngb(int n){
    forn(i, n) cout << "_";
}

void salto(){
    cout << "\n";
}

int main(){
    ll n; cin >> n;
    nespacios(n);
    ngb(n+1);
    salto();
    ll ult = 0;
    forn(i, n-1){
        nespacios(n-i-1);
        cout << '/'; nespacios(n+(2*i)+1);
        cout << '\\';
        ult = i;
        salto();
    }
    cout << '/'; ngb(n);
    if (n == 1) cout << " ";
    else nespacios(n+ult+1); 
    cout << "\\"; ngb(n+1);
    salto();
    forn(i, n-1){
        nespacios(n+i+1);
        cout <<"\\"; nespacios(n+(2*(n-i))-1);
        cout << "/";
        salto();
    }
    nespacios(2*n);
    cout <<"\\";ngb(n+1); cout << "/";
}