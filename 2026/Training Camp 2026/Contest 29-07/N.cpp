#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;

int main() {
    FIN;
    ll t, n;
    char a;
    string s;
    cin >> t;
    while(t--){
        cin >> n;
        vector<char> aux;
        cin >> s;
        char minChar ='z'+1;
        ll posMin = 0;
        for(ll i=n-1; i>=0; i--){
            if (s[i] < minChar){
                minChar = s[i];
                posMin = i;
            }
        }
        aux.push_back(minChar);
        for(ll j=0; j<n; j++){
            if (j != posMin) aux.push_back(s[j]);
        }
        
        
        for(ll d =0; d<aux.size(); d++) cout << aux[d];
        cout << "\n";
        
        aux.clear();
    }
    
    
}