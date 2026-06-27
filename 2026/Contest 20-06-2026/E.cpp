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
    int t, total;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        cout << "Holaaa";
        int i = 0;
        total = 0;
        while (i < s.length()){
            while ((i < s.length())&&(s[i] == 'W'))
                i++;
            int contAux = 0;
            bool negra = false;
            while ((i < s.length())&&((contAux != (k)))){
                if (s[i] == 'B')
                    negra = true;
                contAux++;
                i++;
            }
            if (negra)
                total++;
        }
        cout << total << "\n";
    }
    return 0;
}