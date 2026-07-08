#include <bits/stdc++.h>
using namespace std;

int main() {
	int c, lle, sal;
	set<pair<int, int>> hora;
	cin >> c;
	for (int i = 0; i < c; i++){
	    cin >> lle >> sal;
	    hora.insert({lle, +1});
	    hora.insert({sal, -1});
	}
	
	int suma = 0, maxi = -1;
	for(auto par : hora){
	    suma += par.second;
	    maxi = max(maxi, suma);
	}
	cout << maxi << endl;
    return 0;
}