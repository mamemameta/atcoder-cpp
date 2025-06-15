#include<iostream>
#include<iostream>
#define ll long long 
#define mod (998244353)
using namespace std;
ll dp[55][2505];
int main(){
	ll n,m,k;
	cin>>n>>m>>k;
	dp[0][0]=1;
	for(ll idx=0;idx<=n;++idx){
		for(ll col=0;col<=k;++col){
			if(dp[idx][col]){
				for(ll i=1;i<=m;++i){
					dp[idx+1][col+i]+=dp[idx][col]%mod;
					dp[idx+1][col+i]%=mod;
				}
			}
		}
	}
	ll ans=0;
	for(ll col=0;col<=k;++col){
		ans+=dp[n][col]%mod;
		ans%=mod;
	}
	cout<<ans<<endl;
}
