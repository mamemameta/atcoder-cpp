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
	ll t;cin>>t;
	while(t--)
	{
		ll n;cin>>n;
		string s;cin>>s;
		if(s==string(n,'1'||s==string(n,'0')))
		{
			cout<<0<<"\n";return 0;
		}
		ll ans=n;
		ll ones=count(s.begin(),s.end(),'1');
		ll mx=0,sc=0;
		for(ll i=0;i<n;++i)
		{
			sc+=(s[i]=='0'?1:-1);
			mx=max(mx,sc);
			ans=min(ones+(sc-mx),ans);
		}
		cout<<ans<<"\n";
	}
}
