#include<iostream>
#include<vector>
#include<set>
#include<queue>
/*
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
*/
using namespace std;
int main()
{
	int h,w;
	cin>>h>>w;
	int sy,sx;
	int gy,gx;
	cin>>sy>>sx;
	cin>>gy>>gx;
	--sy,--sx;
	--gy,--gx;
	vector<string>v(h);
	for(int i=0;i<h;++i)
	{
		cin>>v[i];
	}
	queue<pair<int,int>>q;
	q.push({sy,sx});
	vector<vector<int>>dis(h,vector<int>(w,h*w+10));
	dis[sy][sx]=0;
	vector<int> dy={1,-1,0,0};
	vector<int> dx={0,0,1,-1};
	while(!q.empty())
	{
		auto [y,x]=q.front();
		q.pop();
		for(int i=0;i<4;++i)
		{
			int yy=y+dy[i];
			int xx=x+dx[i];
			if(v[yy][xx]!='#'&&dis[yy][xx]>dis[y][x]+1)
			{
				dis[yy][xx]=dis[y][x]+1;
				q.push({yy,xx});
			}
		}
	}
	cout<<dis[gy][gx]<<endl;
}
