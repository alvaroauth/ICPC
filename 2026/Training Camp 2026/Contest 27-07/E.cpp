#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;

int main(){
    string s, t; cin >> s >> t;
    bool igu = false, par = false, both = false, autom = false;
    ll lt = t.length(), ls = s.length();
    if (s.length() >= t.length()){
        
        map<char, ll> mapt, mapst;
        
        for(char c : t){
            mapt[c]++;
        }
        
        for(char c : s){
            mapst[c]++;
        }
        bool bot2 = true;
        for (auto [car, cant] : mapt){
            if (mapst[car] < cant){
                bot2 = false;
                break;
            }
        } 
        if (ls == lt) bot2 = false;
        if(bot2) both = true;
        
        ll it = 0, is = 0;
        while (is < ls){
            if ((it < lt) && (s[is] == t[it]))
                it++;
            is++;
        }
        if (it == lt) autom = true;
        
        
        for(int i = 0; i <= (ls - lt); i++){
            bool igual = true, parecido = true; 
            if (!igu){
                for(int j = i; j < i + lt; j++){
                    if (s[j] != t[j-i]){
                        igual = false;
                        break;
                    }
                }
                if (igual) igu = true;
            }
            
            if (!par){
                //cout << "entre";
                map<char, ll> maps;
                //cout <<"i: " << i << "   lt: " << lt << endl;
                for(int j = i; j < (i + lt); j++){
                    //cout << "Hola";
                    maps[s[j]]++;
                }
                //for(auto [car, elem] : maps) cout << car << ": " << elem << "   ";
                //cout << endl;
                
                for(auto [car, cant] : mapt){
                    if (cant != maps[car]){
                        parecido = false;
                        break;
                    }
                }
                
                if (parecido) par = true;
            }
            if (igual) break;
        }
    }
    //cout << par << endl;
    if (autom) cout << "automaton" << "\n";
    else if ((!igu) && (!par) && (!both)) cout << "need tree" << "\n";
    else
        if (igu) cout << "automaton" << "\n";
        else if (((par) && ((ls != lt)) || (both))) cout << "both";
        else cout << "array" << "\n";
}
