#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;
typedef long long ll;

void incrementar(vector<vector<ll>> &matriz, int i){
    matriz[i][1] += matriz[i-1][0];
    matriz[i][1] %= MOD;
    for (int j = 1; j < 4; j++){
        matriz[i][j-1] += matriz[i-1][j];
        matriz[i][j-1] %= MOD;
        matriz[i][j+1] += matriz[i-1][j];
        matriz[i][j+1] %= MOD;
    }
    
    matriz[i][3] += matriz[i-1][4];
    matriz[i][3] %= MOD;
}

int main() {
	int n;
	cin >> n;
	vector<vector<ll>> matriz(n+1, vector<ll> (5));
	
	for (int i = 0; i < 5; i++){
	    matriz[0][i] = 0;
	}
	
	for (int i = 0; i < 5; i++){
	    matriz[1][i] = 1;
	}
	
	for (int i = 2; i < n+1; i++){
	    incrementar(matriz, i);
	}
	
	ll total = 0;
	
	for (int i = 0; i < 5; i++){
	    total += matriz[n][i];
	    total %= MOD;
	}
	    
	cout << total << "\n";
    return 0;
}