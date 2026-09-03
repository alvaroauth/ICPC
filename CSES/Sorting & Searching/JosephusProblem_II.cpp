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

void avanzar(ll &pos, ll n){
    pos++;
    if (pos == n+1) pos = 1;
}

void avanzar2(vector<bool> v, ll &pos, ll n, ll k){
    ll cont = 0;
    while ((cont < k) || (v[pos] == false)){
        if (v[pos] == false) avanzar(pos, n);
        else{
            avanzar(pos, n);
            cont++;
        }
    }
}

int main(){
    ll n, k; cin >> n >> k;
    vector<bool> v(n+1, true);

    ll cont = 0; ll pos = 1;
    k = (k % n);
    while (cont < n){
        avanzar2(v, pos, n, k);
        cout << pos << " ";
        v[pos] = false;
        cont++;
    }

    cout << "\n";
}