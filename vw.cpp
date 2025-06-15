#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
using namespace std;
#define ll long long
int main(){
	ll h,w;
	cin>>h>>w;
	vector<string>s(h);
	for(ll i=0;i<h;++i){
		cin>>s[i];
	}
	map<vector<ll>,ll>mp;
	for(ll i=0;i<w;++i){
		vector<ll>v;
		for(ll j=0;j<h;++j){
			if(s[j][i]=='#')
				v.push_back(j);
		}
		mp[v]++;
	}
	for(ll i=0;i<h;++i)
		cin>>s[i];
	for(ll i=0;i<w;++i){
		vector<ll>v;
		for(ll j=0;j<h;++j){
			if(s[j][i]=='#')
				v.push_back(j);
		}
		mp[v]--;
	}
	auto it=mp.begin();
	for(;it!=mp.end();++it){
		if(it->second!=0){
			cout<<"No"<<endl;
			return 0;
		}
	}
	cout<<"Yes"<<endl;
}
