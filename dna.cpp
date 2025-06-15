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
	ll ans=0;
	for(ll l=0;l<s.length();++l){
		ll ca=0,cb=0;
		for(ll r=l;r<s.length();++r){
			if(s[r]=='A')
				ca++;
			else if(s[r]=='T')
				ca--;
			else if(s[r]=='C')
				cb++;
			else 
				cb--;
			if(ca==0&&cb==0)
				ans++;
		}
	}
	co ans el;
}
