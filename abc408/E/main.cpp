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
	ll n,m;
	cin>>n>>m;
	vector<vector<pair<ll,ll>>> e(n);
	ll ans=1ll<<30;
	for(ll i=0;i<m;++i)
	{
		ll u,v,w;
		cin>>u>>v>>w;
		--u;--v;
		e[u].push_back({v,w});
		e[v].push_back({u,w});
	}
	vector<ll>memo(n,1ll<<30);
	priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<>>q;
	q.push({0,0});
	while(!q.empty())
	{
		auto[cst,now]=q.top();
		q.pop();
		for(auto [to,w]:e[now])
		{
			if((w|cst)<memo[to])
			{
				memo[to]=(w|cst);
				q.push({memo[to],to});
			}
		}
	}
	cout<<memo[n-1]<<endl;
}
