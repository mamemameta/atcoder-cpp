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
	ll n,x;
	cin>>n>>x;
	ll sum=0,mi=1LL<<60,ans=1LL<<60;
	ll a,b;
	for(ll i=1;i<=n;++i){
		cin>>a>>b;
		sum+=a+b;
		mi=min(mi,b);
		ans=min(ans,sum+mi*(x-i));
	}
	cout<<ans<<endl;
}
