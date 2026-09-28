#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define forr(i, a, b) for(ll i = (a); i < (ll)(b); i++)
#define forn(i, n) forr(i, 0, n)

struct SegmentTree{
    vector<ll> segmentos;
    ll size;

    void init(ll n){
        size = 1;
        while (size < n) size *= 2;
        segmentos.assign(2*size, 0);
    }

    void set(ll i, ll v){
        _set(i, v, 0, 0, size);
    }

    void _set(ll i, ll v, ll x, ll lx, ll rx){
        if (rx - lx == 1){
            segmentos[x] = v;
            return;
        }
        ll mid = (lx + rx) / 2;
        if (mid > i){
            _set(i, v, 2 * x + 1, lx, mid);
        } else {
            _set(i, v, 2 * x + 2, mid, rx);
        }
        segmentos[x] = segmentos[2 * x + 1] + segmentos[2 * x + 2];
    }

    ll buscarEnRango(ll l, ll r){
        return _buscar(l, r, 0, 0, size);
    }

    ll _buscar(ll l, ll r, ll x, ll lx, ll rx){
        if ((lx >= r) || (rx <= l)) return 0;
        if ((lx >= l) && (rx <= r)) return segmentos[x];
        ll mid = (lx + rx) / 2;
        ll s1 = _buscar(l, r, 2 * x + 1, lx, mid);
        ll s2 = _buscar(l, r, 2 * x + 2, mid, rx);
        return s1 + s2;
    }
};

int main(){
    SegmentTree st;
    ll n, q; cin >> n >> q;
    st.init(n);

    forn(i, n){
        ll aux; cin >> aux;
        st.set(i, aux);
    }

    forn(i, q){
        ll op; cin >> op;
        if (op == 1){
            ll ii, v; cin >> ii >> v;
            st.set(ii, v);
        } else {
            ll l, r; cin >> l >> r;
            cout << st.buscarEnRango(l, r) << "\n";
        }
    }
}