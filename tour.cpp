#include<iostream>
#include<vector>
#include<deque>
#include<set>
#include<map>
#include<algorithm>
#include<queue>
#define ll long long
using namespace std;

static map<ll,pair<priority_queue<ll,vector<ll>,greater<ll>>,deque<ll>>>mp;
vector<ll>visited;
ll n;
void move(ll now){
	cout<<now<<' ';
	++visited[now];
	ll tmp;
	while(!mp[now].first.empty()){
		tmp=mp[now].first.top();
		mp[now].first.pop();
		if(visited[tmp])
			continue;
		move(tmp);
		cout<<now<<' ';
	}
	while(!mp[now].second.empty()){
		tmp=mp[now].second.front();
		mp[now].second.pop_front();
		if(visited[tmp])
			continue;
		move(tmp);
		cout<<now<<' ';
	}
	return ;
}
int main(){
	cin>>n;
	visited.resize(n+1);
	ll a,b;
	for(ll i=0;i<n-1;++i){
		cin>>a>>b;
		mp[a].first.push(b);
		mp[b].first.push(a);
	}
	ll now=1;
	for(auto &m:mp){
		while(!m.second.first.empty()&&\
				m.second.first.top()<m.first){
			m.second.second.push_back\
				(m.second.first.top());
			m.second.first.pop();
		}
	}
	for(auto &m:mp){
		while(!m.second.first.empty()&&\
				m.second.first.top()<m.first){
			m.second.second.push_back\
				(m.second.first.top());
			m.second.first.pop();
		}
	}
	/*
	for(auto &m:mp){
		cout<<m.first<<":"<<endl;
		while(!m.second.first.empty()){
			cout<<m.second.first.top()<<" ";
			m.second.first.pop();
		}
		cout<<endl;
		for(auto pq:m.second.second){
			cout<<pq<<" ";
		}
		cout<<endl;
	}
	*/
	move(now);
	cout<<endl;
}
