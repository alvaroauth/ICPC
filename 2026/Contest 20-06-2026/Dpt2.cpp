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
    int t;
    string s, b1, b2;

    cin >> t;
    ll pos;
    while (t--){
        cin >> s;
        if (s.length() == 1) cout << 0 << "\n";
        else {
            ll suma = 0;
            pos = 0;
            while (pos < s.length()) {
                if (s[pos] == 'B'){
                    pos++;
                    while (pos < s.length() and (s[pos] != 'B')){
                        suma++;
                        pos++;
                    }
                } else pos++;
            }
            //cout << "Primera" << suma << pos << endl;
            ll rev = 0;
            pos = s.length();
            while (pos > 1) {
                if (s[pos] == 'B'){
                    pos--;
                    while (pos > 1 and (s[pos] != 'B')){
                        rev++;
                        pos--;
                    }
                } else pos--;
            }
            //cout << "Segunda" << suma << pos << endl;
            cout << max(suma, rev) << "\n";
        }
    }
}