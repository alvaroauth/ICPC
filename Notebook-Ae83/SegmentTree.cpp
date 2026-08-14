#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define forr(i, a, b) for(ll i = (a); i < (ll) (b); i++)
#define forn(i, n) forr(i, 0, n)
#define SZ(x) int((x).size())
#define pb push_back
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define esta(x,c) ((c).find(x) != (c).end())
typedef long long ll;

struct segtree {
  vector <ll> t; int tam;
  ll NEUT = 0; // Neutral element of operation
  ll op(ll a, ll b){ return a+b; } // Operation to make
   
  void build(vector<ll>v, int n) {  // build the tree 
    // root en 1, ojas en el intervalo [tam, 2*tam-1]
    tam = sizeof(int) * 8 - __builtin_clz(n); tam = 1<<tam;
    t.resize(2*tam,NEUT); forn(i, n) t[tam+i] = v[i];
    for(int i = tam - 1; i > 0; i--) t[i] = op(t[i<<1], t[i<<1|1]);
  }

  void update(int p, ll value) {  // set value at position p
    for (t[p += tam] = value; p > 1; p >>= 1) t[p>>1] = op(t[p], t[p^1]);
    //Tener cuidado aca, podria ser que en cosas no conmutativas, para p impar: p > p^1.
  }

  ll query(int l, int r) {  // op on interval [l, r]
    ll res = NEUT;
    for (l += tam, r += tam; l <= r; l >>= 1, r >>= 1) {
      if (l&1) res = op(res, t[l++]);
      if (!(r&1)) res = op(res, t[r--]);
    }
    return res;
  }
};