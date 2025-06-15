#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<numeric>
using namespace std;
#define ll long long

int main(){
	ll n,l,r;
	cin>>n>>l>>r;
	vector<ll>v(n);
	for(auto &i:v)
		cin>>i;
	ll ans=r*n;
	ll tmp=0;
	for(ll i=0;i<n;++i){
		tmp=min(l*(i+1),tmp+v[i]);
		ans=min(ans,tmp+r*(n-i-1));
	}
	cout<<ans<<endl;
}
