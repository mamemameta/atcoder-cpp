#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
using namespace std;
#define ll long long
vector<ll>v;
int main(){
	ll n;
	cin>>n;
	v.resize(n+1);
	for(ll i=1;i<=n;++i){
		cin>>v[i];
	}
	ll q;cin>>q;
	ll t,x,i;
	ll all=-1;
	deque<ll>que;
	for(ll i=1;i<=n;++i){
		que.push_back(i);
	}
	while(q--){
		cin>>t;
		if(t==1){
			cin>>x;
			all=x;
			while(!que.empty()){
				v[que.front()]=0;
				que.pop_front();
			}
		}else if(t==2){
			cin>>i>>x;
			que.push_back(i);
			v[i]+=x;
		}else{
			cin>>i;
			if(all==-1){
				cout<<v[i]<<endl;
			}else{
				cout<<all+v[i]<<endl;
			}
		}
	}
}
