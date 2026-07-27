#include <bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
#define forr(i,a,b) for(int i = int(a); i < int(b); i++)
#define forn(i,n) forr(i,0,n)
const int MAXN = 2e5 + 7;

// UPSOLVEADO
// PROBLEMA DE MIERDA QUE SE VAYA A CAGAR
int main(){
    FIN;
    int n, m; cin >> n >> m;
    int a, b; char c;

    vector<vector<pair<char, int>>> g(n+5);
    vector<bool> visto(n+5, false);
    vector<pair<string, int>> padre(n+5, {"", -1});

    forn(i, m){
        cin >> a >> b >> c;
        g[a].push_back({c, b});
        g[b].push_back({c, a});
    }

    queue<int> cola;
    visto[1] = true;
    cola.push(1);
    cola.push(-1);

    int act; bool ene = false;
    vector<pair<string, int>> posiblePadre;

    while (cola.size() > 0){
        int act = cola.front(); cola.pop();
        if (act != -1){
            for(auto [car, num] : g[act]){
                if ((ene)&&(num == n))
                    posiblePadre.push_back({(padre[act].first+car), act});
                else if (num == n){
                    ene = true;
                    posiblePadre.push_back({(padre[act].first+car), act});
                }
                else if ((visto[num])&&(car < padre[num].first[padre[num].first.length() - 1])){
                    padre[num].first[padre[num].first.length() - 1] = car;
                    padre[num].second = act;
                }
                else if (!visto[num]){
                    visto[num] = true;
                    padre[num] = {(padre[act].first+car), act};
                    cola.push(num);
                }
            }
        }
        else if (ene){
            break;
        }
        else if (cola.size() > 0){
            cola.push(-1);
        }
    }

    stack<int> pila;
    sort(posiblePadre.begin(), posiblePadre.end());

    int elem = posiblePadre[0].second;
    string res = posiblePadre[0].first;

    pila.push(posiblePadre[0].second);
    while (padre[elem].second != -1){
        pila.push(padre[elem].second);
        elem = padre[elem].second;
    }

    cout << pila.size() << "\n";
    
    while (pila.size() > 0){
        auto nodo = pila.top(); pila.pop();
        cout << nodo << " ";
    }

    cout << n << " ";
    cout << "\n";
    cout << res << "\n";
}