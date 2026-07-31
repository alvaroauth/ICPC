#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(v) (v).begin(), (v).end()
#define sz(v) ((ll)(v).size())
#define forr(i,a,n) for(ll i = (ll)(a); i < (ll)(n); i++)
#define forn(i,n) forr(i,0,(n))
#define FIN ios::sync_with_stdio(false); cin.tie(0);

int main(){
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        string s; cin >> s;
        
        ll te = 0, eme = 0;
        for(char c : s){
            if (c == 'T') te++;
            else eme++;
        }

        bool puedo = true;
        if (te == 2*eme){
            ll tes = 0;
            for(char c : s){
                if (c == 'T') tes++;
                else tes--; 
                if (tes < 0){
                    puedo = false;
                    break;
                }
            }
            tes = 0;
            for(int i = n-1; i >= 0; i--){
                if (s[i] == 'T') tes++;
                else tes--;
                if (tes < 0){
                    puedo = false;
                    break;
                }
            }
        }
        else puedo = false;
        if (puedo) cout << "YES";
        else cout << "NO";
        cout << "\n";
    }
}