#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<numeric>
using namespace std;
#define ll long long

vector<string>v;
vector<vector<ll>>done;
ll h,w;
ll sx=-1,sy;
ll dx[]={1,-1,0,0},dy[]={0,0,-1,1};
bool dfs(ll x,ll y,ll px,ll py){
	if(done[x][y])
		return false;
	done[x][y]++;
	for(ll i=0;i<4;++i){
		ll xx=x+dx[i],yy=y+dy[i];
		if(xx<0||h<=xx||yy<0||w<=yy)
			continue;
		if(v[x][y]=='#')
			continue;
		if(xx==px&&yy==py)
			continue;
		if(xx==sx&&yy==sy)
			return true;
		if(dfs(xx,yy,x,y))
			return true;
	}
	return false;
}
int main(){
	cin>>h>>w;
	v.resize(h);
	done.resize(h);
	for(ll i=0;i<h;++i){
		done[i].resize(w);
		cin>>v[i];
		if(sx==-1){
			auto it=v[i].find('S');
			if(it!=string::npos)
				sx=i,sy=it;
		}
	}
	cout<<(dfs(sx,sy,-11,-11)?"Yes":"No")<<endl;
}
