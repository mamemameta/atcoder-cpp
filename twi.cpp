#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
using namespace std;
#define ll long long
map<ll,map<ll,ll>>mp;
bool ch(ll a,ll b){
	auto it=mp.find(a);
	if(it==mp.end()){
		return 0;
	}else{
		auto itt=(it->second).find(b);
		if(itt==(it->second).end()){
			return 0;
		}else{
			if(itt->second==1){
				return 1;
			}else{
				return 0;
			}
		}
	}
}
int main(){
	ll n,q;
	cin>>n>>q;
	ll t,a,b;
	while(q--){
		cin>>t>>a>>b;
		if(t==1){
			mp[a][b]=1;
		}else if(t==2){
			mp[a][b]=0;
		}else{
			if(ch(a,b)&&ch(b,a)){
				cout<<"Yes"<<endl;
			}else{
				cout<<"No"<<endl;
			}
		}
	}
}
