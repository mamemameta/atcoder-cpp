#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
using namespace std;
const int mod= 998244353LL;
int main(){
	//cout<<"start"<<endl;
	int n,m,k;
	cin>>n>>m>>k;
	vector<vector<int>>dp(55,vector<int>(n*m+5,0LL));
	dp[0][0]=1LL;
	for(int idx=0;idx<n;++idx){
		for(int col=idx;col<=k;++col){
			//cout<<"idx"<<idx<<"col"<<col<<endl;
			if(dp[idx][col]){
				for(int i=1;i+idx<=k&&i<=m;++i){
					dp[idx+1][col+i]+=dp[idx][col];
					dp[idx+1][col+i]%=mod;
				}
			}else{
				continue;
			}
		}
	}
	int ans=0;
	for(int i=0;i<=k;++i){
		ans+=dp[n][i];
		ans%=mod;
	}
	cout<<ans<<endl;
}
