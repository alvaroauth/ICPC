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
    ll n, m, k;
    cin >> n >> m >> k;

    multiset<ll> a, b;

    ll aux;
    forn(i, n){
        cin >> aux;
        a.insert(aux);
    }

    forn(i, m){
        cin >> aux;
        b.insert(aux);
    }

    auto app = a.begin(), apa = b.begin();
    ll tam, des, cont = 0;

    while ((app != a.end()) && (apa != b.end())){
        tam = *apa; des = *app;
        if ((tam <= (des+k))&&(tam >=(des-k))){
            cont++;
            apa++;
            app++;
        }
        else{
            if (tam < des)
                apa++;
            else
                app++;
        }
    }
    cout << cont << "\n";
}