#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, aux, total = 0;
	cin >> n;
	vector<long long> v(n);
	cin >> v[0];
	for (int i = 1; i < n; i++){
	    cin >> aux;
	    while (aux < v[i-1]){
	        aux++;
	        total++;
	    }
	    v[i] = aux;
	}
    cout << total;
}
