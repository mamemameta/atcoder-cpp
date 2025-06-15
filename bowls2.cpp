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
#define vll vector<ll> 
#define puf push_front
#define pub push_back
#define pof pop_front()
#define pob pop_back()
#define fs first
#define se second
#define fr front()
#define bk back()

ll ans=0;
ll n,m,k;
vector<pair<ll,ll>>con;
vector<pair<ll,ll>>people;
map<vll,ll>mp;
vll v;
void dfs(ll d){
	/*
	cout<<"d"<<d<<":";
	for(ll i=0;i<=n;++i){
		if(v[i])
			cout<<i<<" ";
	}
	cout<<endl;
	//*/
	if(d==k){
		ll tmp=0;
		for(auto i:con){
			tmp+=(v[i.fs]&&v[i.se]);
		}
		ans=max(tmp,ans);
		//cout<<"bbbbbb"<<endl;
		return;
	}
	/*
	if(mp.count(v)==1&&(mp[v]<=d)){
		//cout<<"aaaaaa"<<endl;
		return;
	}
	//*/
	const auto [a,b]=people[d];
	if(v[a]&&v[b]){
		dfs(d+1);
	}else if(v[a]==1&&v[b]==0){
		v[b]=1;
		dfs(d+1);
		v[b]=0;
	}else if(v[a]==0&&v[b]==1){
		v[a]=1;
		dfs(d+1);
		v[a]=0;
	}else{
		//cout<<"a"<<a<<"b"<<b<<endl;
		v[a]=1;
		dfs(d+1);
		v[a]=0;
		/*cout<<"a"<<a<<"b"<<b<<endl;
		cout<<d<<"se"<<a<<endl;
		cout<<"dse"<<d<<":";
		for(ll i=0;i<=n;++i){
			if(v[i])
				cout<<i<<" ";
		}
		cout<<endl;
		*/
		v[b]=1;
		dfs(d+1);
		v[b]=0;
	}
	mp[v]=d;
	//cout<<d<<"end"<<endl;
	return;
}
int main(){
	cin>>n>>m;
	v.resize(n+1);
	con.resize(m);
	for(auto &p:con)
		cin>>p.fs>>p.se;
	cin>>k;
	people.resize(k);
	for(auto &p:people)
		cin>>p.fs>>p.se;
	dfs(0);
	cout<<ans<<endl;
}
