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
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll n,m;
	cin>>n>>m;
	vector<ll>v(n+5);
	for(ll i=0;i<m;++i)
	{
		ll l,r;
		cin>>l>>r;
		v[l]++;v[r+1]--;
	}
	ll ans=m;
	for(ll i=1;i<=n;++i)
	{
		v[i]+=v[i-1];
		ans=min(ans,v[i]);
	}
	cout<<ans<<endl;
}
