#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
#define forr(i,a,b) for(int i = int(a); i < int(b); i++)
#define forn(i,n) forr(i,0,n)

// Upsolveado, lo vuelvo a hacer como forma de perdon al codigo horrible que hice cuando lo meti
int main(){
    string s, t; cin >> s >> t;
    ll ls = s.length(), lt = t.length();

    if (lt > ls) cout << "need tree\n";
    else{
        bool igual = true, parecido = true;
        map<char, ll> maps, mapt;

        forn(i, ls) maps[s[i]]++;
        forn(i, lt) mapt[t[i]]++;

        ll it = 0, is = 0;
        while (is < ls){
            if (s[is] == t[it]) it++;
            is++;
        }
        if (it != lt) igual = false;

        if (!igual){
            for(auto [car, cant] : mapt){
                if (maps[car] < cant) parecido = false;
            }
        }
        if (igual) cout << "automaton\n";
        else if (parecido)
            if (ls == lt) cout << "array\n";
            else cout << "both\n";
        else cout << "need tree\n";
    }
}