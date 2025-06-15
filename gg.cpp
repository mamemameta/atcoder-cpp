#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<string>
using namespace std;
#define ll unsigned long long

map<ll,ll>mp;
ll f(ll x){
	if(x==0l){
		return 1l;
	}else{
		if(mp.find(x)!=mp.end()){
			return mp[x];
		}else{
			return mp[x]=f(x/3l)+f(x/2l);
		}
	}
}

int main(){
	ll n;
	cin>>n;
	cout<<f(n)<<endl;
}


