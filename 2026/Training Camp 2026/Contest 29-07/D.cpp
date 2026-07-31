#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;

int main(){
    vector<int> primos = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,4,9,25,49};
    string resp;
    ll cont = 0;
    for(int i=0; i<primos.size(); i++){
        
        cout << primos[i] << "\n";
        cout.flush();
        cin >> resp;
        if (resp == "yes") cont++;
        if (cont >= 2) break;
    }
    if (cont >=2) {
        cout << "composite" << "\n";
    } else cout << "prime" << "\n";
    cout.flush();

}

    