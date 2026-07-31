#include <bits/stdc++.h>
using namespace std;

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;
#define forr(i, a, b) for (ll i = (a); i < (ll)(b); i++)
#define forn(i, n) forr(i, 0, n)


int main(){
    int n, m;
    
    cin >> n;
    vector<int> v1(n);
    for(int i = 0; i<n ; i++){
		cin >> v1[i];
	}
	cin >>m;
    vector<int>v2(m);
    
    for(int i = 0; i<m ; i++){
		cin >> v2[i];
	}
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	int i = 0, j = 0;
	int res = 0;
	
	while((i< n) && (j<m)){
		if(llabs(v1[i]-v2[j]) <= 1) {
			res++;
			i++;
			j++;
		}
		else if(v1[i] > v2[j]) j++;
		else i++;
	}
	cout << res << "\n";
}
