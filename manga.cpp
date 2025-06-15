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
	ll ans=0;
	deque<ll>que;
	map<ll,ll>mp;
	while(n--){
		ll a;
		cin>>a;
		mp[a]++;
	}
	ll store=0;
	for(auto it=mp.begin();it!=mp.end();++it){
		store+=(it->second)-1;
		que.push_back(it->first);
	}
	while(!que.empty()){
		if(que.front()==ans+1){
			que.pop_front();
			ans++;
		}else{//que.front()>ans+1
			if(store>=2){
	//			cout<<"if"<<ans<<" "<<que.front()<<" "<<store<<endl;;
				store-=2;
				ans++;
			}else if(store==1){
				if(que.empty()){
					break;
				}
	//			cout<<"elif"<<ans<<" "<<que.front()<<endl;;
				store--;
				que.pop_back();
				ans++;
			}else{//store=0
	//			cout<<"else"<<ans<<" "<<que.front()<<" "<<store<<endl;;
				if(que.size()<2){
					break;
				}else{
					que.pop_back();
					que.pop_back();
					ans++;
				}
			}
		}
	}
	/*
	if(que.front()==ans+1){
		que.pop_front();
		ans++;
	}
	*/
	cout<<ans+(store+que.size())/2<<endl;
}
