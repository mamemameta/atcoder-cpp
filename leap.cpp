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
int main(){
	ll n,m;
	cin>>n>>m;
	vector<vector<ll>>v(n,vector<ll>(n,-1));
	v[0][0]=0;
	vector<pair<ll,ll>>d;
	for(ll i=0;i*i<=m;++i){
		for(ll j=i;i*i+j*j<=m;++j){
			if(i*i+j*j==m){
				d.push_back(make_pair(i,j));
				if(i!=j)
					d.push_back(make_pair(j,i));
			}
		}
	}
	/*
	for(auto i:d)
		cout<<i.first<<" "<<i.second<<endl;
	//*/
	deque<pair<ll,ll>>q;
	q.push_back(mp(0,0));
	ll dx[]={1,1,-1,-1},dy[]={1,-1,1,-1};
	while(!q.empty()){
		ll x,y;
		tie (x,y)=q.front();
		q.pop_front();
		for(ll i=0;i<4;++i){
			for(auto dd:d){
				ll xx=x+dd.first*dx[i],yy=y+dd.second*dy[i];
				if(xx<0||yy<0||n<=xx||n<=yy)
					continue;
				if(v[xx][yy]!=-1)
					continue;
				v[xx][yy]=v[x][y]+1;
				q.push_back(mp(xx,yy));
			}
		}
	}
	for(auto i:v){
		for(auto x:i){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}
