#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<numeric>
using namespace std;
#define ll long long
#define mp make_pair
#define N 1002
#define M 2005
ll dx[]={-1,-1,0,0,1,1};
ll dy[]={-1,0,-1,1,0,1};
ll v[M][M];
/*
ll dfs(ll x,ll y,ll px,ll py){
	cout<<"x"<<x-N<<"y"<<y-N<<endl;
	v[x][y]=0;
	ll tmp=0;
	for(ll i=0;i<6;++i){
		ll xx=x+dx[i],yy=y+dy[i];
		if(0<=xx&&xx<M&&0<=yy&&yy<M){
			if(xx==px&&yy==py)
				continue;
			if(v[xx][yy]==0)
				continue;
			tmp+=dfs(xx,yy,x,y);
		}
	}
	return tmp+1;
}
*/
int main(){
	for(ll i=0;i<M;++i){
		for(ll j=0;j<M;++j)
			v[i][j]=0;
	}
	ll n;cin>>n;
	ll x,y;
	for(ll i=0;i<n;++i){
		cin>>x>>y;
		v[x+N][y+N]=1;
	}
	ll ans=n;
	deque<pair<ll,ll>>que;
	for(ll k=0;k<M;++k){
		for(ll j=0;j<M;++j){
			ll tmp=0;
			if(v[k][j]==1){
				que.emplace_back(k,j);
				while(!que.empty()){
					ll x,y;
					tie(x,y)=(que.front());
					/*
					cout<<"x"<<x-N<<"y"<<y-N<<endl;
					//*/
					que.pop_front();
					if(v[x][y]==0)
						continue;
					/*
					cout<<"aaaaaaa"<<endl;
					//*/
					v[x][y]=0;
					tmp++;
					for(ll i=0;i<6;++i){
						ll xx=x+dx[i],yy=y+dy[i];
						if(0<=xx&&xx<M&&0<=yy&&yy<M){
							if(v[xx][yy]==0)
								continue;
							que.emplace_back(xx,yy);
						}
					}
				}
				ans-=tmp-1;
				/*
				cout<<".........."<<endl;
				//*/
			}
		}
	}
	cout<<ans<<endl;
}
