#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<numeric>
using namespace std;
#define ll long long
#define N 2005
ll dp[N][N];
int main(){
	ll n,m;cin>>n>>m;
	vector<ll>v(n+1);
	for(ll j=1;j<=n;++j)
		cin>>v[j];
	for(ll i=1;i<=m;++i){
		dp[i][i]=dp[i-1][i-1]+i*v[i];
		for(ll j=i+1;n-j>=m-i;++j){
			dp[i][j]=max(dp[i][j-1],dp[i-1][j-1]+i*v[j]);
		}
	}
	cout<<dp[m][n]<<endl;
	/*
	for(ll i=0;i<=m;++i){
		for(ll j=0;j<=n;++j){
			cout<<(dp[i][j]<-100000?'\0':dp[i][j])<<" ";
		}
		cout<<endl;
	}
	//*/
}
