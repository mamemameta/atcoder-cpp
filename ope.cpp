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
#define vll vector<ll>
int main(){
	/*
	vll aa={1,2,3,4};
	auto ii=upper_bound(aa.begin(),aa.end(),0);
	cout<<distance(aa.begin(),ii)<<endl;
	*/
	ll n,q;
	cin>>n>>q;
	vll v(n);
	for(auto &i:v){
		cin>>i;
	}
	sort(v.begin(),v.end());
	vll sum(n);
	sum[0]=v[0];
	for(ll i=1;i<n;++i){
		sum[i]=sum[i-1]+v[i];
	}
	/*
	for(auto i:sum){
		cout<<i<<" ";
	}
	cout<<endl;
	//*/
	ll x,ans;
	while(q--){
		cin>>x;
		auto it=upper_bound(v.begin(),v.end(),x);
		ll i=it-v.begin();
		//cout<<"i"<<i<<":";
		if(i==0){
			ans=sum[n-1]-x*n;
		}else if(i==n){
			ans=x*n-sum[n-1];
		}else{
			ans=(x*(i)-sum[i-1]+(sum[n-1]-sum[i-1])-x*(n-i));
		}
		cout<<ans<<endl;
	}
}
