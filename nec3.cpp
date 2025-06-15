#include<iostream>
#include<vector>
#include<set>
#include<map>
#define ll long long
using namespace std;
int main(){
	cout<<(1<<20)<<endl;
	ll n,m;
	cin>>n>>m;
	vector<vector<ll>>dp(2005,vector<ll>(2005));
	for(ll i=0;i<n;++i){
		cin>>dp[1][i];
	}
	for(ll idx=2;idx<=n;++idx){
		for(ll col=0;col<=n;++col){
			dp[idx][col]=max(dp[idx][])
		}
	}
	cout<<ma<<endl;
}
