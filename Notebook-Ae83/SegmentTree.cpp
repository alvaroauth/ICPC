#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define forr(a,b) for(ll i = (ll)(a); i < (ll)(b); i++)
#define forn(n) forr(0,n)
#define L(x) x*2
#define R(x) x*2+1
#define FIN ios::sync_with_stdio(0); cin.tie;
const int MAXN = 1<<19;
const ll MOD = 1e9 + 7;
const ll NEUT = 0;

vector<ll> tree(2*MAXN, NEUT);

ll op(ll a, ll b){
	return a + b;
}

void build(vector<ll> &v, int node = 1, int l = 0, int r = MAXN-1){
	if(l == r){
		tree[node] = v[l];
		return;
	}
	int mid = (l+r)/2;
	build(v, L(node),l,mid);
	build(v,R(node),mid+1,r);
	tree[node] = op(tree[L(node)],tree[R(node)]);
	return;
}

void update(int k, ll u, int node = 1, int l = 0, int r = MAXN-1){
	if(l == r){
		tree[node] = u;
		return;
	}
	int mid = (l+r)/2;
	if(k>= l && k <= mid){
		update(k,u,L(node),l,mid);
	} else {
		update(k,u,R(node),mid+1,r);
	}
	tree[node] = op(tree[L(node)],tree[R(node)]);
	return;
}

ll querie(int a, int b, int node = 1, int l = 0, int r = MAXN-1){
	if(r<a || l>b) return NEUT;
	if(l>=a && r<=b) return tree[node];
	int mid = (l+r)/2;
	return op(querie(a,b,L(node),l,mid),querie(a,b,R(node),mid+1,r));
}
