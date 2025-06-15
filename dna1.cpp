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
	vll ca(n+2),ct(n+2),cc(n+2),cg(n+2);
	for(ll i=0;i<s.length();++i){
		if(s[i]=='A')
			ca[i+1]++;
		else if(s[i]=='G')
			cg[i+1]++;
		else if(s[i]=='C')
			cc[i+1]++;
		else
			ct[i+1]++;
		ca[i+1]+=ca[i];
		cc[i+1]+=cc[i];
		ct[i+1]+=ct[i];
		cg[i+1]+=cg[i];
	}
	ll ans=0;
	co 'a';
	fa(i,ca)
		co i<<" " ;
	co endl;
	co 't';
	fa(i,ct)
		co i<<" " ;
	co endl;
	co 'g';
	fa(i,cg)
		co i<<" " ;
	co endl;
	co 'c';
	fa(i,cc)
		co i<<" " ;
	co endl;
	for(ll l=0;l<=s.length();++l){
		for(ll r=l+1;r<=s.length();++r){
			co l<<" "<<r el;
			if((ca[r]-ca[l]==ct[r]-ct[l])&&(cc[r]-cc[l]==cg[r]-cg[l])){
				ans++;
				co "ans" el;
			}
		}
	}
	co ans el;
}
