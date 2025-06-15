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
	ll n,x,y,z;
	cin>>n>>x>>y>>z;
	vector<pair<ll,ll>>a(n+1),b(n+1),c(n+1);
	for(ll i=1;i<=n;++i){
		cin>>a[i].first;
		a[i].second=-i;
	}
	for(ll i=1;i<=n;++i){
		cin>>b[i].first;
		b[i].second=-i;
	}
	for(ll i=1;i<=n;++i){
		c[i].first=a[i].first+b[i].first;
		c[i].second=-i;
	}
	vector<ll>done(n+1);
	done[0]=1;
	/*
	for(auto i:a){
		cout<<i.first<<":"<<-i.second<<" ";
	}
	cout<<endl;
	//*/
	sort(a.rbegin(),a.rend());
	sort(b.rbegin(),b.rend());
	sort(c.rbegin(),c.rend());
	ll i=0,s;
	set<ll>pass;
	while(x--){
		for(;i<=n;++i){
			s=-a[i].second;
			if(done[s]==0){
				done[s]=1;
				pass.insert(s);
				break;
			}
		}
	}
	i=0;
	while(y--){
		for(;i<=n;++i){
			s=-b[i].second;
			if(done[s]==0){
				done[s]=1;
				pass.insert(s);
				break;
			}
		}
	}
	i=0;
	/*
	for(auto i:c){
		cout<<i.first<<":"<<-i.second<<" ";
	}
	cout<<endl;
	//*/
	while(z--){
		for(;i<=n;++i){
			s=-c[i].second;
			if(done[s]==0){
				done[s]=1;
				pass.insert(s);
				break;
			}
		}
	}
	for(auto i:pass)
		cout<<i<<endl;
}
