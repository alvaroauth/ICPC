#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define forr(i, a, b) for(ll i = (a); i < (ll)(b); i++)
#define forn(i, n) forr(i, 0, n)

struct SegmentTree{
    vector<ll> segs;
    ll size;

    void init(ll n){
        size = 1;
        while (size < n) size *= 2;
        segs.assign(2*size, 0);
    }

    void build(vector<ll> &a){
        init(a.size());
        _build(a, 0, 0, size);
    }

    void _build(vector<ll> &a, ll x, ll lx, ll rx){
        if (rx - lx == 1){
            if (lx < a.size()){
                segs[x] = a[lx];
            }
            return;
        }
        ll mid = (lx + rx) / 2;
        _build(a, 2 * x + 1, lx, mid);
        _build(a, 2 * x + 2, mid, rx);
        segs[x] = segs[2 * x + 1] + segs[2 * x + 2];
    }

    void set(ll i, ll v){
        _set(i, v, 0, 0, size);
    }

    void _set(ll i, ll v, ll x, ll lx, ll rx){
        if (rx - lx == 1){
            segs[x] = v;
            return;
        }
        ll mid = (lx + rx) / 2;
        if (mid > i){
            _set(i, v, 2 * x + 1, lx, mid);
        } else {
            _set(i, v, 2 * x + 2, mid, rx);
        }
        segs[x] = segs[2 * x + 1] + segs[2 * x + 2];
    }

    ll buscarEnRango(ll l, ll r){
        return _buscar(l, r, 0, 0, size);
    }

    ll _buscar(ll l, ll r, ll x, ll lx, ll rx){
        if ((lx >= r) || (rx <= l)) return 0;
        if ((lx >= l) && (rx <= r)) return segs[x];
        ll mid = (lx + rx) / 2;
        ll s1 = _buscar(l, r, 2 * x + 1, lx, mid);
        ll s2 = _buscar(l, r, 2 * x + 2, mid, rx);
        return s1 + s2;
    }
};

int main(){
    SegmentTree st;
    ll n, q; cin >> n >> q;
    vector<ll> a(n);
    
    forn(i, n){
        cin >> a[i];
    }

    st.build(a);

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