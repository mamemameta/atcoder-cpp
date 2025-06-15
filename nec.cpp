#include<iostream>
#include<vector>
#include<set>
#include<map>
#define ll long long
using namespace std;
int main(){
	string s;cin>>s;
	if(s[0]=='1'){
		cout<<"No"<<endl;
		return 0;
	}
	map<ll,vector<ll>>mp={
		{0,{6}},
		{1,{3}},
		{2,{1,7}},
		{3,{0,4}},
		{4,{2,8}},
		{5,{5}},
		{6,{9}}
	};
	vector<ll>cnt(7),vv;
	for(ll i=0;i<7;++i){
		for(auto r:mp[i]){
			if(s[r]=='1'){
				cnt[i]++;
			}
		}
		if(cnt[i]!=0){
			vv.push_back(i);
		}
	}
	if(vv.empty()||vv.front()==vv.back()){
		cout<<"No"<<endl;
		return 0;
	}
	for(ll i=0;i<7;++i){
		if(vv.front()<i&&i<vv.back()&&cnt[i]==0){
			cout<<"Yes"<<endl;
			return 0;
		}
	}
	cout<<"No"<<endl;
}
