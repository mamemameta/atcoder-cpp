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
#define mkp make_pair
#define pll pair<ll,ll> 
#define puf push_front
#define pub push_back
#define pof pop_front()
#define pob pop_back()
#define fs first
#define se second
#define fr front()
#define bk back()

int main(){
	ll n,k;
	cin>>n>>k;
	vector<ll>a(k);
	double ans=0;
	for(auto &i:a)
		cin>>i;
	vector<vector<ll>>v(n+1,vector<ll>(2));
	for(ll i=1;i<=n;++i)
		cin>>v[i][0]>>v[i][1];
	for(ll i=1;i<=n;++i){
		double mi=1LL<<60;
		for(auto x:a){
			mi=min(mi,hypot(abs(v[i][0]-v[x][0]),abs(v[i][1]-v[x][1])));
		}
		ans=max(mi,ans);
	}
	printf("%.17f\n",ans);
}
