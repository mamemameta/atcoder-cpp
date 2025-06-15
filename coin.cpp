#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<numeric>
using namespace std;
#define ll long long
#define N 5005
ll dp[N][N];
int main(){
	ll n,m;
	cin>>n>>m;
	vector<ll>x(n+5);
	for(ll i=1;i<=n;++i)
		cin>>x[i];
	vector<ll>b(n+1);
	ll c,y;
	while(m--){
		cin>>c>>y;
		b[c]=y;
	}
	dp[0][0]=0;
	for(ll i=0;i<n;++i){
		for(ll j=0;j<=i;++j){
			dp[i+1][j+1]=max(dp[i+1][j+1],dp[i][j]+b[j+1]+x[i+1]);
			dp[i+1][0]=max(dp[i+1][0],dp[i][j]);
		}
	}
	ll ans=0;
	for(ll i=0;i<=n;++i){
		ans=max(ans,dp[n][i]);
	}
	cout<<ans<<endl;
	/*
	for(ll i=0;i<=n;++i){
		for(ll j=0;j<=n;++j){
			printf("%2d ",dp[i][j]);
		}
		cout<<endl;
	}
	//*/
}
