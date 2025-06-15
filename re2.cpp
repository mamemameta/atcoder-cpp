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
#define bl bool
#define mkp make_pair
#define vll vector<ll> 
#define pll pair<ll,ll> 
#define mll map<ll,ll> 
#define puf push_front
#define pub push_back
#define pof pop_front()
#define pob pop_back()
#define fs first
#define se second
#define fr front()
#define bk back()
#define al(x) x.begin(),x.end()
#define ral(x) x.rbegin(),x.rend()
#define ff(i,x,y) for(ll i=x;i<y;++i)
#define co cout<<
#define el <<endl;
#define coel cout<<endl;
#define ci cin>>
#define fa(i,v) for(auto &i:v)
#define re return 0;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;ci n;
	vll a(n);
	fa(i,a)
		ci i;
	deque<ll> b={0};
	ff(i,1,n){
		if((i&1)==((n-1)&1))
			b.puf(i);
		else
			b.pub(i);
	}
	fa(i,b){
		//co i<<" ";
		co a[i]<<" ";
	}
	coel;
}
