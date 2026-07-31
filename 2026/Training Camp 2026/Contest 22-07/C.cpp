#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;



int main() {
    ll n, x, contador = 0, max = 0;

    cin >> n;
    vector<bool> vistos(n, false);
    n = n * 2;
    while (n--) {
        cin >> x;
        if (!vistos[x-1]){
            vistos[x-1] = true;
            contador++;
        } else {
            if (contador > max) max = contador;
            contador--;
        }
    }
    cout << max << "\n";
    return 0;
}
