#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<numeric>
#include<cmath>
using namespace std;
#define ll long long
#define bl bool
#define mkp make_pair
#define vll vector<ll> 
#define pll pair<ll,ll> 
#define mll map<ll,ll> 
#define puf push_front
#define pub push_back
#define pof pop_front()
#define pob pop_back()
#define fs first
#define se second
#define fr front()
#define bk back()
#define all(x) x.begin(),x.end()
#define ral(x) x.rbegin(),x.rend()
#define ff(i,x,y) for(ll i=x;i<y;++i)
#define co cout<<
#define el <<endl;
#define coel cout<<endl;
#define ci cin>>
#define fa(i,v) for(auto &i:v)
#define re return 0;
#define ma(a,x) a=max(a,x)
#define mi(a,x) a=min(a,x)
#define so(v) sort(all(v))
#define rev(v) reverse(all(v))
//O(2*10^8)
//9*10^18
ll modpow(ll a, ll b, ll mod = 4) {
	ll res = 1;
	for (a %= mod; b; a = a * a % mod, b >>= 1)
		if (b & 1) res = res * a % mod;
	return res;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll x, y, z;
	scanf("%lld%lld%lld", &x, &y, &z);
	y = 4 + modpow(y , z, 4);
	x = modpow(x , y, 10);
	printf("%lld\n", x);

	return 0;
}
