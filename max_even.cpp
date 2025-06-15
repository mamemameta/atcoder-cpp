#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
using namespace std;
#define ll long long

int main(){
	ll n;
	cin>>n;
	ll ans=-1;
	vector<ll>o,e;
	ll x;
	for(ll i=0;i<n;++i){
		cin>>x;
		if(x&1){
			o.push_back(x);
		}else{
			e.push_back(x);
		}
	}
	sort(o.rbegin(),o.rend());
	sort(e.rbegin(),e.rend());
	if(o.size()>=2)
		ans=o[0]+o[1];
	if(e.size()>=2){
		ans=max(ans,e[0]+e[1]);
	}
	cout<<ans<<endl;
}
