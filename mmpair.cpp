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
	ll n;cin>>n;
	vector<ll>v(n+1);
	ll cnt=0;
	deque<ll>que;
	for(ll i=1;i<=n;++i){
		cin>>v[i];
		cnt+=i==v[i];
		if(i<v[i])
			que.push_back(i);
	}
	ll ans=cnt*(cnt-1) /2;
	ll x;
	while(!que.empty()){
		x=que.front();
		que.pop_front();
		ans+=x==v[v[x]];
	}
	cout<<ans<<endl;
}
