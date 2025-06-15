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
	ll n,s;
	cin>>n>>s;
	ll prev=0;
	ll ok=1;
	for(ll i=0;i<n;++i)
	{
		ll t;
		cin>>t;
		ok&=t-prev<=s;
		prev=t;
	}
	cout<<(ok?"Yes":"No")<<endl;
}
