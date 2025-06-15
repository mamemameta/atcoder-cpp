#include<iostream>
#include<map>
#include<set>
#include<vector>
#define ll long long
using namespace std;
int main(){
	ll n,m;
	cin>>n>>m;
	vector<vector<ll>>dp(m+1,vector<ll>(n+1,-99999999999999));
	vector<ll>v(n);
	for(auto &i:v)
		cin>>i;
	dp[1][0]=v[0];
	for(ll idx=1,col=idx;col<=n;++col){
		dp[idx][col]=max(dp[idx][col-1],v[col]);
	}
	for(ll idx=2;idx<=m;++idx){
		for(ll col=idx-1;col<=n;++col){
			dp[idx][col]=max(dp[idx][col-1],dp[idx-1][col-1]+v[col]*(col+1));
		}
	}
	for(auto i:dp){
		for(auto t:i){
			cout<<t<<" ";
		}
		cout<<endl;
	}
}
