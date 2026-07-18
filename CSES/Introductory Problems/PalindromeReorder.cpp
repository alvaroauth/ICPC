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
    string s;
    cin >> s;

    char medio = '#';
    map<char, ll> mp;

    for (auto c : s){
        mp[c]++;
    }
    string resul = ""; bool rompio = false;

    for (char c = 'A'; (c <= 'Z'); c++){
        if (mp[c] % 2 != 0){
            if (medio != '#'){
                rompio = true;
                break;
            }
            medio = c;
        }
        resul += string(mp[c]/2, c);
    }

    if (not(rompio)){
        cout << resul;
        if (medio != '#')
            cout << medio;
        reverse(all(resul));
        cout << resul;
    }
    else
        cout << "NO SOLUTION";
    cout << "\n";
    return 0;
}