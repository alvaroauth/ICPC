#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define forr(i, a, b) for(ll i = (a); i < (ll)(b); i++)
#define forn(i, n) forr(i, 0, n)

struct SegmentTree{
    vector<pair<ll, ll>> segs;
    ll size;

    void init(ll n){
        size = 1;
        while (size < n) size *= 2;
        segs.assign(2*size, {1e18, 1});
    }

    void set(ll i, ll v){
        _set(i, v, 0, 0, size);
    }

    void _set(ll i, ll v, ll x, ll lx, ll rx){
        if (rx - lx == 1){
            segs[x] = {v, 1};
            return;
        }
        ll mid = (lx + rx) / 2;
        if (mid > i){
            _set(i, v, 2 * x + 1, lx, mid);
        } else {
            _set(i, v, 2 * x + 2, mid, rx);
        }
        auto s1 = segs[2 * x  + 1], s2 = segs[2 * x + 2];
        ll mini = min(s1.first, s2.first);
        ll cont = 0;
        if (s1.first == mini) cont += s1.second;
        if (s2.first == mini) cont += s2.second;
        segs[x] = {mini, cont};
    }

    pair<ll, ll> buscarEnRango(ll l, ll r){
        return _buscar(l, r, 0, 0, size);
    }

    pair<ll, ll> _buscar(ll l, ll r, ll x, ll lx, ll rx){
        if ((lx >= r) || (rx <= l)) return {1e18, 1};
        if ((lx >= l) && (rx <= r)) return segs[x];
        ll mid = (lx + rx) / 2;
        pair<ll, ll> s1 = _buscar(l, r, 2 * x + 1, lx, mid);
        pair<ll, ll> s2 = _buscar(l, r, 2 * x + 2, mid, rx);
        ll mini = min(s1.first, s2.first);
        ll cont = 0;
        if (s1.first == mini) cont += s1.second;
        if (s2.first == mini) cont += s2.second;
        return {mini, cont};
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
            auto aux = st.buscarEnRango(l, r);
            cout << aux.first << " " << aux.second << "\n";
        }
    }
}