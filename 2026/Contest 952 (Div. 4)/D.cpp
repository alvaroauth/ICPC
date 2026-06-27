#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while (t--){
        ll n, m, max = -1, maxCont;
        cin >> n >> m;
        string s, masLargo;
        for (int i = 0; i < n; i++){
            cin >> s;
            int cantidad = static_cast<int>(std::count(s.begin(), s.end(), '#'));
            if (cantidad > max){
                max = cantidad;
                masLargo = s;
                maxCont = i + 1;
            }
        }

        int prim = -1;
        int cant = 0;
        for (int i = 0; i < masLargo.length(); i++){
            if (masLargo[i] == '.') continue;
            if (masLargo[i] == '#'){
                if (prim == -1)
                    prim = i + 1;
                cant++;
            }
        }
        if(cant == 1) cout << maxCont << " " << (prim) << "\n";
        else cout << maxCont << " " << (prim + ceil(cant / 2))  << "\n";
    }
}