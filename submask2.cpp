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
	ll n;
	cin>>n;
	vector<ll>v={0ll};
	for(ll i=0;i<=63;++i){
		if(n&(1ll<<i)){
			ll sz=v.size();
			for(ll j=0;j<sz;++j){
				v.push_back(v[j]|(1ll<<i));
			}
		}
	}
	for(auto i:v)
		cout<<i<<endl;
}
