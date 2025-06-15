#include<iostream>
#include<vector>
using namespace std;
#define ll long long
int main(){
	ll n,m,t;
	cin>>n>>m>>t;
	vector<ll>v;
	ll a;
	v.push_back(0);
	for(ll i=0;i<n-1;++i){
		cin>>a;
		v.push_back(a);
	}
	ll x,y;
	vector<pair<ll,ll>>s;
	for(ll i=0;i<m;++i){
		cin>>x>>y;
		s.push_back(pair<ll,ll>(x,y));
	}
	s.push_back(pair<ll,ll>(-1,-1));
	ll cnt=0;
	for(ll i=1;i<n;++i){
		if(s[cnt].first==i){
			t+=s[cnt].second;
			cnt++;
		}
		t-=v[i];
		if(t<=0){
			cout<<"No"<<endl;
			return 0;
		}
	}
	cout<<"Yes"<<endl;
}
