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

void escribirPotencia10(ll n){
    cout << "10^{";
    cout << n;
    cout << "}";
}

bool esDigito(char c){
    return ((c >= '0') and (c <= '9'));
}

bool esNumero(string s){
    for(auto c : s){
    if (!esDigito(c))
        return false;
    }
    return true;
}

ll cantidadCeros(string s){
    ll i = s.length() - 1;
    ll cont = 0;
    while ((i >= 0) and (s[i] == '0')) i--, cont++;
    return cont;
}

string substr(string &s, ll &i){
    string aux = "";
    while ((i < (ll)s.length()) and (s[i] != ' ')) aux += s[i], i++;
    return aux;
}

bool esPotencia10(string s, bool &imp){
    if ((s[0] != '1') or (cantidadCeros(s) < ((ll)s.length() - 1))) return false;
    imp = true;
    return true;
}

void convertirAOtro(string &s, ll cc, bool &imp){
    string aux = "";
    aux += s[0];
    if (!(cc + 1 == (ll)s.length())){
        aux+='.';
        for(int i = 1; i < ((ll)s.length() - cc); i++){
            aux+= s[i];
        }
    }
    aux += "\\cdot";
    cout << aux;
    escribirPotencia10(s.length()-1);
    imp = true;
}

int main(){
    ll t; cin >> t;
    cin.ignore();
    while (t--){
        string s; getline(cin, s);
        ll i = 0;
        while (i < (ll)s.length()){
            string saux = substr(s, i);
            ll cc = cantidadCeros(saux);

            bool imprimi = false;
            if (esNumero(saux) && (cc >= 4)){
                if (esPotencia10(saux, imprimi)){
                    escribirPotencia10(cc);
                }
                else{
                    convertirAOtro(saux, cc, imprimi);
                }
            }
            if (!imprimi) cout << saux;
            while ((i < (ll)s.length()) and (s[i] == ' ')) cout << " ", i++;
        }
        cout << "\n";
    }
}