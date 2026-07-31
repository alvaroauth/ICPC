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
    FIN;
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    multiset<int> ciclos;
    int diasV = 0;
    bool huboCambio = false;
    int cont = 0;
    int contM = 0;
    multiset<int> especiales;
    bool estoyVerano = true;

    for(int i = 0; i< n ; i++){
        cin >> v[i];
        if(v[i] >= 0) diasV++;
        if(v[i] < 0) {contM++;
        }
        if((v[i] < 0) &&(estoyVerano)){
            estoyVerano = !estoyVerano;
            cont++;
            // if(diasV > 0){
            //     cout << "Hola" << endl;
                // if(!huboCambio) {
                //     cout << "Tobi" << endl;
                //     huboCambio = true;
                // }
                if(huboCambio) {
                    if(diasV > 0){
                    ciclos.insert(diasV);}
                //  cout << "holaa " << i  << endl;
                //  cout << diasV << endl;   
                }
                if(cont > 0) huboCambio = true;
            diasV = 0;
            }
        if((v[i] >= 0) &&(!estoyVerano)){
            estoyVerano = !estoyVerano;
            cont++;
        }
        
    }
    if((estoyVerano) &&(diasV>0)){
        especiales.insert(diasV);
    }
    int dif = k - contM;
    // cout << cont << endl;
    if(dif < 0){
        cout << -1 << endl;
    }
    else{
        // cout << ciclos.size() << endl;
        while((dif > 0)&& (ciclos.size() > 0)){
            // cout <<  "holaa " <<*ciclos.begin() << endl;
            dif = dif - *ciclos.begin();
            if(dif < 0){dif = dif + *ciclos.begin(); break;}
            else  cont=cont-2; 
            ciclos.erase(ciclos.begin());
            
            
        }
        if((dif > 0) && (especiales.size()>0)){
            if (dif- *especiales.begin()>=0) cont--;
        }
        if(contM >0){ 
        cout << cont << endl;}
        else cout << 0 << endl;
    }
}