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
	set<ll>v={0ll};
	deque<ll>que;
	for(ll i=0;i<=63;++i){
		if((n>>i)&1ll){
			for(auto it=v.begin();it!=v.end();it++){
				que.push_back(*it+(1ll<<i));
			}
			while(!que.empty()){
				v.insert(que.front());
				que.pop_front();
			}
		}
	}
	for(auto i:v)
		cout<<i<<endl;
}
