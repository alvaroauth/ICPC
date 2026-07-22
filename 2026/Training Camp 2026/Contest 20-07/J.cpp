#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
#define forr(i,a,b) for(int i = int(a); i < int(b); i++)
#define forn(i,n) forr(i,0,n)

int main(){
    set<ll> atras, adelante;
    ll n; cin >> n;
    vector<vector<int>> matriz(n, vector<int>(2));

    forn(i, n){
        atras.insert(i+1);
        adelante.insert(i+1);
    }

    forr(i, 0, n){
        ll a, b;
        cin >> a >> b;

        if (a != 0) adelante.erase(a);
        if (b != 0) atras.erase(b);

        matriz[i][0] = a;
        matriz[i][1] = b;
    }

    if (adelante.size()== 1 and atras.size() == 1)  
    else {
        int posL = -1;
        int posR = -2;
        int i = 0, j = 0;
        while(adelante.size() != 1 or atras.size()!= 1) {
            if ((matriz[i][0] == 0) and (posL != posR)) {
                posL = i;
                if (posR != -2) {
                    matriz[i][0] =  posR;
                    matriz[posR][1] = i;
                    posL = -1;
                    posR = -2;
                }


            } 
            if (matriz[i][1] == 0 and (posL != posR)) {
                posR = i;
                if (posL != -1){
                    matriz[posL][posR]
                }
            }
            if (matriz[i][0] != 0 and matriz[i][1] != 0) continue;
            i++; j++;
        }
    }
    



}