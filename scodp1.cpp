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
#define mkp make_pair
#define vll vector<ll> 
#define pll pair<ll,ll> 
#define puf push_front
#define pub push_back
#define pof pop_front()
#define pob pop_back()
#define fs first
#define se second
#define fr front()
#define bk back()
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define ff(i,x,y) for(ll i=x;i<y;++i)
#define co cout<<
#define el <<endl;
#define ci cin>>
#define bl bool
#define fa(i,v) for(auto &i:v)
#define M 10005
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	bl dp[M]={};
	dp[0]=1;
	ll n;ci n;
	ff(i,0,n){
		ll x;ci x;
		for(ll i=M-1;i>=0;--i)
			if(dp[i]==1)
				dp[i+x]=1;
	}
	for(ll i=M-1;i>=0;--i){
		if(i%10&&dp[i]){
			printf("%d\n",i);
			return 0;
		}
	}
	co 0 el;
}
