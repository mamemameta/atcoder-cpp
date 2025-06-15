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
	ll n;cin>>n;
	vector<ll>v(n);
	for(ll i=0;i<n;++i)
		cin>>v[i];
	sort(v.begin(),v.end());
	v.erase(unique(v.begin(),v.end()),v.end());
	cout<<v.size()<<endl;
	for(ll x:v)
		cout<<x<<" ";
	cout<<endl;
}
