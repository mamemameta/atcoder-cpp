#include<iostream>
#include<map>
#include<set>
#include<vector>
#include<queue>
#define ll long long
using namespace std;
int main(){
	ll n;cin>>n;
	map<ll,ll>mp;
	ll tmp;
	for(ll i=1;i<=n;++i){
		cin>>tmp;
		mp[tmp]=i;
	}
	ll cnt=0;
	deque<string>q;
	bool changed=1;
	while(changed){
		changed=0;
		for(ll i=1;i<=n;++i){
			if(mp[i]!=i){
				if((mp[i]-i)%2){
					q.push_back("A "+to_string(mp[i]-1));
					++mp[mp[i]];
					--mp[i];
					++cnt;
					changed=1;
					break;
				}else{
					q.push_back("B "+to_string(mp[i]-2));
					mp[mp[i]]+=2;
					mp[i]-=2;
					++cnt;
					changed=1;
					break;
				}
			}
		}
	}
	cout<<cnt<<endl;
	while(!q.empty()){
		cout<<q.front()<<endl;
		q.pop_front();
	}
}
