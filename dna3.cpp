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
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define ff(i,x,y) for(ll i=x;i<y;++i)
#define co cout<<
#define el <<endl;
#define ci cin>>
#define fa(i,v) for(auto &i:v)

int main(){
	ll n;ci n;
	string s;ci s;
	vll ca(n+1),ct(n+1),cc(n+1),cg(n+1);
	ff(i,0,n){
		ca[i+1]=ca[i]+(s[i]=='A');
		ct[i+1]=ct[i]+(s[i]=='T');
		cc[i+1]=cc[i]+(s[i]=='C');
		cg[i+1]=cg[i]+(s[i]=='G');
	}
	ll ans=0;
	for(ll i=0;i<n;++i)
		for(ll j=i+1;j<=n;++j)
			ans+=c,a[j]-ca[i]==ct[j]-ct[i]&&cc[j]-cc[i]==cg[j]-cg[i];
	co ans el;
}
