#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<numeric>
using namespace std;
#define ll long long

ll n,x,y;
map<ll,set<ll>>mp;
deque<ll>que;
vector<ll>done;
bool found=0;
void dfs(ll now,ll pre){
	//cout<<now<<endl;
	if(done[now])
		return;
	done[now]++;
	que.push_back(now);
	if(now==y){
		for(auto i:que){
			cout<<i<<" ";
		}
		cout<<endl;
		exit(0);
		return;
	}
	for(auto i:mp[now]){
		if(i==pre){
			continue;
		}
		dfs(i,now);
	}
	que.pop_back();
	return;
}
int main(){
	cin>>n>>x>>y;
	done.resize(n+1);
	for(ll i=0;i<n-1;++i){
		ll u,v;
		cin>>u>>v;
		mp[u].insert(v);
		mp[v].insert(u);
	}
	//cout<<"start"<<endl;
	dfs(x,-1);
	//cout<<"end"<<endl;
	/*
	   for(auto i:que){
	   cout<<i<<" ";
	   }
	   */
	cout<<endl;
}
