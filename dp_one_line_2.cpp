#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<numeric>
using namespace std;
#define ll long long
#define N	2005
#define INF	0x3f3f3f3f3f3f3f3fLL
int main(){
	vector<ll>dp(N,-INF);
	dp[0]=0;
	ll n,m,x;
	cin>>n>>m;
	while(n--){
		cin>>x;
		for(ll i=m;1<=i;--i){
			if(dp[i-1]!=-INF){
				dp[i]=max(dp[i],dp[i-1]+i*x);
			}
		}
	}
	cout<<dp[m]<<endl;
}
