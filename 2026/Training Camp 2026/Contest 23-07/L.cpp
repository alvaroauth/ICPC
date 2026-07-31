#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main(){
    FIN;
    ll n, a;
    cin >> n;
    n--;
    ll cont = 1;
    ll ant = 0;
    ll max = 0;
    cin >> a;
    ant = a;
    while(n--){
        cin >> a;
       
        if (a >= ant) {
            cont++;
           
        } else {
            if (cont > max) max = cont;
            cont = 1;
        }
        ant = a;
    }
    if (cont > max) max = cont;
    cout << max << "\n";
}