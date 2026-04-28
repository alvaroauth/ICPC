#include <bits/stdc++.h>
using namespace std;

int main() {
	int cli, l, s;
	map<int, int> v;
	cin >> cli;
	for (int i = 0; i < cli; i++){
	    cin >> l >> s;
	    for (int j = l ; j < s; j++)
	        v[j]++;
	}
	int maxi = -1;
	for (auto par : v) if (par.second > maxi) maxi = par.second;
    cout << maxi;
    return 0;
}
