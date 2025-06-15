#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#define ll long long
#define M (998244353)
using namespace std;
ll n;
ll dp[100005][5]={};
ll lis[100005][2]={};
int main(){
	cin>>n;
	for(ll t=1;t<=n;++t){
		ll aa;
		cin>>aa;
		cin>>lis[aa][0];
		cin>>lis[aa][1];
	}
	for(ll t=1;t<=4;++t){
		for(ll x=0;x<=t;++x){
			if(x==0){
				dp[t][x]=max({dp[t-1][x],dp[t-1][x+1]});
			} else if(x==4){
				dp[t][x]=max({dp[t-1][x-1],dp[t-1][x]});
			} else{
				dp[t][x]=max({dp[t-1][x-1],dp[t-1][x],dp[t-1][x+1]});
			}
			if(x==lis[t][0]&&lis[t][1]){
				dp[t][x]+=lis[t][1];
			}
		}
	}
	for(ll t=5;t<=100004;++t){
		for(ll x=0;x<=4;++x){
			if(x==0){
				dp[t][x]=max({dp[t-1][x],dp[t-1][x+1]});
			}else if(x==4){
				dp[t][x]=max({dp[t-1][x-1],dp[t-1][x]});
			}
			else{
				dp[t][x]=max({dp[t-1][x-1],dp[t-1][x],dp[t-1][x+1]});
			}
			if(x==lis[t][0]&&lis[t][1])
				dp[t][x]+=lis[t][1];
		}
	}
	ll ans=0;
	for(ll x=0;x<=4;++x){
		ans=max(ans,dp[100003][x]);
	}
	cout<<ans<<endl;
	/*
	for(ll t=0;t<=5;++t){
		for(ll x=0;x<5;++x){
			printf("%3d ",dp[t][x]);
		}
		cout<<endl;
	}
	*/

}
