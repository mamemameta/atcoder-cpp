#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<complex>
using namespace std;
#define endl "\n"
#define ll long long
#define st string
#define M 8611686018427387904
#define N 100
int main(){
	ll n;cin>>n;
	vector<vector<ll>>dp(n+5,vector<ll>(n+5,1ll<<20));
	vector<ll>p(n+5);
	for(ll i=0;i<n;++i){
		cin>>p[i]>>p[i+1];
	}
	for(ll i=0;i<n;++i)
		dp[i][i]=0;
	for(ll d=1;d<n;++d){
		for(ll l=0;l+d<n;++l){
			ll r=l+d;
			for(ll e=l;e<r;++e){
				dp[l][r]=min(dp[l][r],dp[l][e]+dp[e+1][r]+p[l]*p[e+1]*p[r+1]);
			}
		}
	}
	cout<<dp[0][n-1]<<endl;
}
