#include<iostream>
#include<functional>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<cstring>
#include<bitset>
#include<iomanip>
#include<random>
#include<fstream>
#include<complex>
#include<time.h>
#include<stack>
#include<cassert>
using namespace std;
#define ll long long

int main()
{
	ll n,m;cin>>m>>n;
	vector<string>v(n,string(m,'0'));
	deque<pair<ll,ll>>q;
	vector dis(n,vector<ll>(m,n*m+5));
	for(ll i=0;i<n;++i)
	{
		for(ll j=0;j<m;++j)
		{
			cin>>v[i][j];
			if(v[i][j]=='s')
			{
				q.push_back({i,j});
				dis[i][j]=0;
			}
		}
	}

	vector<ll> dy={0,0,1,-1},dx={1,-1,0,0};
	while(!q.empty())
	{
		auto [y,x]=q.front();
		q.pop_front();
		//cout<<y<<" "<<x<<endl<<flush;
		for(ll i=0;i<dy.size();++i)
		{
			ll yy=y+dy[i],xx=x+dx[i];
			if(0<=yy&&yy<n&&0<=xx&&xx<m&&v[yy][xx]!='1')
			{
				if(dis[yy][xx]>dis[y][x]+1)
				{
					dis[yy][xx]=dis[y][x]+1;
					q.push_back({yy,xx});
				}
				if(v[yy][xx]=='g')
				{
					cout<<dis[y][x]+1<<'\n';
					return 0;
				}
			}
		}
	}
	cout<<"Fail"<<'\n';
}
