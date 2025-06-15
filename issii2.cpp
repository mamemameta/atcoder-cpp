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
#define ci cin>>
#define fa(i,v) for(auto &i:v)

int main(){
	string s;ci s;
	ll k;ci k;
	ll n=s.length();
	ll r,cnt=0;
	for(r=n;0<r;--r){
		if(s[0]==s[r-1]){
			cnt++;
		}else{
			break;
		}
	}
	//co "r"<<r el;
	//co "cnt"<<cnt el;
	ll i;
	for(i=-1;i<r;++i){
		if(s[0]==s[i+1]){
			cnt++;
		}else{
			break;
		}
	}
	//co "cnt"<<cnt el;
	ll ans=cnt/2;
	//co "fsans"<<ans el;
	ll cn=0;
	//co "i"<<i el;
	for(++i;i+1<=r;++i){
		if(s[i]==s[i+1]){
			cn++;
		}else{
			cn++;
			//co "cn"<<cn el;
			ans+=cn/2;
			cn=0;
		}
	}
	co ans*k el;

}
/*
ooooooooo
0000000009/2=4
eeeeeeeeee
eeeeeeeeee10/2=5
*/
