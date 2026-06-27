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

int puntos(int x, int y){
    if ((x == 0)||(x == 9)||(y == 0)||(y == 9))
        return 1;
    if ((x == 1)||(x == 8)||(y == 1)||(y == 8))
        return 2;
    if ((x == 2)||(x == 7)||(y == 2)||(y == 7))
        return 3;
    if ((x == 3)||(x == 6)||(y == 3)||(y == 6))
        return 4;
    if ((x == 4)||(x == 5)||(y == 4)||(y == 5))
        return 5;
}

int main(){
    int t, total;
    cin >> t;
    while (t--){
        vector<string> vs(10);
        total = 0;
        forn(i, 10){
            cin >> vs[i];
        }
        for (int i = 0; i < 10 ; i++){
            for (int j = 0; j < 10; j++){
                if (vs[i][j] == 'X'){
                    total += puntos(i,j);
                }
                    
            }
        }
        cout << total << "\n";
    }
    return 0;
}