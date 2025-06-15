#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<numeric>
#include<cmath>
using namespace std;
#define ll long long
#define mkp make_pair
#define vll vector<ll> 
#define pll pair<ll,ll> 
#define puf push_front
#define pub push_back
#define pof pop_front()
#define pob pop_back()
#define fs first
#define se second
#define fr front()
#define bk back()

int main(){
	ll n;cin>>n;
	vll p(n),q(n),v(n);
	for(auto &i:p)
		cin>>i;
	for(auto &i:q)
		cin>>i;
	iota(v.begin(),v.end(),1LL);
	ll a,b;
	ll i=1;
	do{
		if(v==p)
			a=i;
		if(v==q)
			b=i;
		++i;
	}while(next_permutation(v.begin(),v.end()));
	cout<<abs(a-b)<<endl;
}
