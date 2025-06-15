#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
using namespace std;
#define ll long long

map<ll,set<ll>>mp;
set<ll>done;
void f(ll now){
	done.insert(now);
	for(auto it=mp[now].begin();it!=mp[now].end();it++){
		if(done.find(*it)!=done.end()){
			continue;
		}
		f(*it);
	}
}
int main(){
	ll n;
	cin>>n;
	ll a,b;
	while(n--){
		cin>>a>>b;
		mp[a].insert(b);
		mp[b].insert(a);
	}
	f(1);
	cout<<*done.rbegin()<<endl;
}
