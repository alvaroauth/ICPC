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
    ll n, t; cin >> n >> t;
    multiset<ll> priori, normal;

    forn(i, n){
        char c; cin >> c; ll aux; cin >> aux;
        if (c == 'P')
            priori.insert(aux);
        else
            normal.insert(aux);
    }

    double tp = ((double)t * 0.75)/priori.size();
    double tn = ((double)t * 0.25)/normal.size();

    cout << tp << " " << tn << endl;

    auto pp = priori.begin(), nn = normal.begin();

    double acum = 0;
    ll cantp = 0, cantn = 0;
    while ((pp != priori.end()) || (nn != normal.end())){
        if ((pp != priori.end()) && (nn != normal.end())){
            if (((*pp) / tp) < ((*nn) / tn)){
                acum += (double)((*pp) / tp);
                cantp++;
                if ((priori.size() - cantp)) tp = ((double)t * 0.75)/(priori.size() - cantp);
                cout << "tp: " << tp << endl; 
                pp++;
            }
            else{
                acum += (double)((*nn) / tn);
                cantn++;
                if ((normal.size() - cantn)) tn = ((double)(t * 0.25)/(normal.size() - cantn));
                cout << "tn: " << tn << endl; 
                nn++;
            }
        }
        else if (pp != priori.end()){
            acum += (double)((*pp) / tp);
            cantp++;
            if ((priori.size() - cantp)) tp = ((double)t * 0.75)/(priori.size() - cantp);
            cout << "tp: " << tp << endl; 
            pp++;
        }
        else{
            acum += (double)((*nn) / tn);
            cantn++;
            if ((normal.size() - cantn)) tn = ((double)(t * 0.25)/(normal.size() - cantn));
            cout << "tn: " << tn << endl; 
            nn++;
        }
    }

    cout << acum << "\n";
}