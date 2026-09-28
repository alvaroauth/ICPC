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
    ll t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        vector<ll> cont(101, 0);
        set<ll> st;
        vector<ll> res;
        ll sum = 0;

        ll ii;
        forn(i, n) cin >> ii, cont[ii]++, st.insert(-ii);

        auto it = st.begin();
        while (st.size() > 0){
            if (it == st.end()) it = st.begin();
            if (it != st.end()){
                ll num = -(*it);
                if (cont[num] != 0){
                    res.pb(num);
                    cont[num]--;
                    it++;
                }
                else{
                    it = st.erase(it);
                }
            }
        }
        
        forn(i, n) cout << res[i] << " ";
        cout << "\n";
        
    }
}