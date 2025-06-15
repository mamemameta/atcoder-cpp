#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<numeric>
#include<cmath>
using namespace std;
#define ll long long
#define bl bool
#define mkp make_pair
#define vll vector<ll> 
#define pll pair<ll,ll> 
#define mll map<ll,ll> 
#define puf push_front
#define pub push_back
#define pof pop_front()
#define pob pop_back()
#define fs first
#define se second
#define fr front()
#define bk back()
#define al(x) x.begin(),x.end()
#define ral(x) x.rbegin(),x.rend()
#define ff(i,x,y) for(ll i=x;i<y;++i)
#define co cout<<
#define el <<endl;
#define ci cin>>
#define fa(i,v) for(auto &i:v)
#define M 105
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n,k,d;
	ci n>>k>>d;
	vll v(n);
	fa(i,v)
		ci i;
	vector<vll> dp(M,vll(M,-1));
	dp[0][0]=0;
	fa(a,v){
		for(ll i=k-1;i>=0;--i){
			for(ll j=d-1;j>=0;--j){
				if(dp[i][j]>=0){
					dp[i+1][(j+a)%d]=max(dp[i][j]+a,dp[i+1][(j+a)%d]);
				}
			}
		}
	}
	/*
	fa(a,dp){
		fa(i,a){
			co i<<" ";
		}
		co endl;
	}
	*/
	co dp[k][0] el;
}
