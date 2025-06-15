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
	ll n;cin>>n;
	vector<ll>inv(n);
	ll x;
	for(ll i=0;i<n;++i){
		cin>>x;
		inv[x]=i;
	}
	vector<ll>cnt(n);
	for(ll i=0;i<n;++i){
		x=(n+(i-inv[i]))%n;
		cnt[x]++;
		cnt[(x+1)%n]++;
		cnt[(n+x-1)%n]++;
	}
	cout<<*max_element(cnt.begin(),cnt.end())<<endl;
}
