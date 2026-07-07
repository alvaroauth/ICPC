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
    
    b1 = "ABA";
    cin >> t;
    while (t--){
        cin >> s;
        if (s.length() != 1) {
            bool tieneB = false;
            int suma = 0;
            for(int i= 0; i<s.length(); i++){
                if (s[i]=='A') suma++;
                else tieneB = true;
            }
            bool es = false;
            for(int i= 0; i<3; i++){
                if (b1[i] == s[i]) es = true;
                else {
                    es = false; 
                    break;
                }
            }
            if (es) suma--;
            es = false;
            if (s.length() > 3){
                int pos = 0;
                for(int i=s.length()-3; i<s.length(); i++){
                    if (b1[pos] == s[i]) es = true;
                    else {
                        es = false; 
                        break;
                    }
                    pos++;
                }
                if (es) suma--;
            }
            if (tieneB) cout << suma << "\n";
            else cout << 0 << "\n";
        } else cout << 0 << "\n";
    }
}