#include<iostream>
#include<map>
#include<set>
#include<vector>
#include<queue>
#define ll long long
using namespace std;
int main(){
	ll n;cin>>n;
	vector<ll>v(n+1);
	for(ll i=1;i<=n;++i)
		cin>>v[i];
	deque<string>dqe;
	ll cnt=0;
	for(ll i=1;i<n;++i){
		if((v[i]-i)%2){
			dqe.push_back("A "+to_string(i));
			++cnt;
			swap(v[i],v[i+1]);
		}
	}
	bool changed=1;
	while(changed){
		changed=0;
		for(ll i=1;i<=n-2;++i){
			if(v[i]>v[i+2]){
				changed=1;
				dqe.push_back("B "+to_string(i));
				++cnt;
				swap(v[i],v[i+2]);
			}
		}
	}
	cout<<cnt<<endl;
	while(!dqe.empty()){
		cout<<dqe.front()<<endl;
		dqe.pop_front();
	}
}
