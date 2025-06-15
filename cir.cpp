#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<numeric>
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
ll sq(ll a){
	return a*a;
}
ll dis(ll x,ll y,ll xx,ll yy){
	return sq(x-xx)+sq(y-yy);
}
int main(){
	ll n;
	cin>>n;
	ll sx,sy,gx,gy;
	cin>>sx>>sy>>gx>>gy;
	map<ll,set<ll>>mp;
	deque<ll>que,goal;
	vector<vector<ll>>v(n,vector<ll>(3));
	for(ll i=0;i<n;++i){
		cin>>v[i][0]>>v[i][1]>>v[i][2];
		if(dis(v[i][0],v[i][1],sx,sy)==sq(v[i][2])){
			que.pub(i);
		}
		if(dis(v[i][0],v[i][1],gx,gy)==sq(v[i][2]))
			goal.pub(i);
	}
	for(ll i=0;i<n-1;++i){
		for(ll j=i+1;j<n;++j){
			ll x=(dis(v[i][0],v[i][1],v[j][0],v[j][1]));
			ll r1=max(v[i][2],v[j][2]),r2=min(v[j][2],v[i][2]);
			if(x>=sq(r1-r2)&&x<=sq(r1+r2)){
				mp[i].insert(j);
				mp[j].insert(i);
			}
		}
	}
	/*
	   for(auto i:mp){
	   cout<<i.fs<<":";
	   for(auto x:i.se)
	   cout<<x<<" ";
	   cout<<endl;
	   }
	//*/
	cout<<"checktime"<<endl;
	/*
	vector<ll>vis(n+5);
	while(!que.empty()){
		ll now=que.fr;
		que.pof;
		if(vis[now]){
			continue;
		}
		vis[now]=1;
		for(auto it=mp[now].begin();it!=mp[now].end();it++){
			if(!vis[*it])
				que.pub(*it);
		}
		for(auto i:goal){
			if(vis[i]){
				cout<<"Yes"<<endl;
				return 0;
			}
		}
	}
	for(auto i:goal){
		if(vis[i]){
			cout<<"Yes"<<endl;
			return 0;
		}
	}
	cout<<"No"<<endl;
	*/
}
