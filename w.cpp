#include<vector>
#include<cstdio>
#include<string>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

const int gx[]={1,-1,0,0},gy[]={0,0,-1,1};

ll h,w,sx=-1,sy;
vector<string>v;
vector<string>vis;

void dfs(int x,int y,int fx,int fy) {
	vis[x][y]=1;
	for (int i=0;i<4;i++) {
		int xx=x+gx[i],yy=y+gy[i];
		if (xx<1||xx>n||yy<1||yy>m) continue;
		if (v[xx][yy]=='#') continue;
		if (xx==fx&&yy==fy) continue;
		if (xx==sx&&yy==sy) {puts("Yes");exit(0);}
		if (vis[xx][yy]) continue;
		dfs(xx,yy,x,y);
	}
	return ;
}

int main() {
	cin>>h>>w;
	v.resize(h);
	vis.resize(h);
	for (int i=0;i<h;i++) {
		cin>>v[i];
		if(sx!=-1){
			auto it=v[i].find('S');
			if(it!=string::npos)
				sx=i,sy=it;
		}
	}
	dfs(sx,sy,0,0);
	puts("No");
	return 0;
}
