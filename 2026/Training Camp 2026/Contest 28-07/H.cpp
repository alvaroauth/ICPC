#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define all(v) v.begin(), v.end()
#define FIN ios::sync_with_stdio(false);cin.tie(0);
#define forr(i,a,n)for(int i=int(a); i<n;i++)
#define forn(i,n)forr(i,0,n)


void solve(){
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	int res=0;
	int contA=n/a;
	int contB=n/b;
	forr(i, 0, contA+1){
		forr(j,0,contB+1){
			
			if(n-a*i-b*j>=0 && (n-a*i-b*j)%c==0){res=max(i+j+(n-a*i-b*j)/c, res); }
		}
		
	}
	cout<<res<<"\n";
}

int main(){
	FIN;
	int t=1;
	//cin>>t;
	while(t--){
		solve();
		cout<<"\n";
	}
}
