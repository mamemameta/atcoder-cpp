#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<numeric>
using namespace std;
#define ll long long
#define M 10005
ll dp[101][M];
int main(){
	ll n,s;
	cin>>n>>s;
	vector<vector<ll>>v(n+1,vector<ll>(2));
	for(ll i=1;i<=n;++i){
		cin>>v[i][0]>>v[i][1];
	}
	dp[0][0]=1;
	for(ll i=1;i<=n;++i){
		for(ll j=0;j<=M;++j){
			if(dp[i-1][j]){
				dp[i][j+v[i][0]]=1;
				dp[i][j+v[i][1]]=2;
			}
		}
	}
	/*
	for(ll i=0;i<10;++i){
		cout<<i;
	}
	cout<<endl;;
	for(ll i=0;i<=n;++i){
		for(ll j=0;j<=M;++j){
			cout<<dp[i][j];
		}
		cout<<endl;
	}
	//*/
	if(dp[n][s]){
		cout<<"Yes"<<endl;
		deque<char>que;
		for(ll i=n;1<=i;--i){
			if(dp[i][s]==1){
				s-=v[i][0];
				que.push_front('H');
			}else{
				s-=v[i][1];
				que.push_front('T');
			}
		}
		while(!que.empty()){
			cout<<que.front();
			que.pop_front();
		}
		cout<<endl;
	}else{
		cout<<"No"<<endl;
	}
}
