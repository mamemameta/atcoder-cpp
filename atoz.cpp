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
	ll n,k,q;
	cin>>n>>k>>q;
	vector<ll>a(k+1);
	for(ll i=1;i<=k;++i)
		cin>>a[i];
	ll x;
	while(q--){
		cin>>x;
		if(a[x]==n)
			continue;
		else if(x!=k&&a[x]+1==a[x+1]){
			continue;
		}else{
			a[x]++;
		}
	}
	for(ll i=1;i<=k;++i)
		cout<<a[i]<<" ";
	cout<<endl;
}
