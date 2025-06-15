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
	//co s el;
	/*
	for(ll i=0;i<27;++i)
		co i%10 ;
	co endl;
	*/
	for(r=n-1;r>=0;r--){
		if(s[0]==s[r]){
			cnt++;
		}else{
			break;
		}
	}
	ll ans=0;
	ll i=0;
	while(i<=r&&s[i]==s[0]){
		cnt++,i++;
	}
	ans+=cnt/2;
	//co ans el;
	char pre=s[i];
	ll cn=0;
	for(;i<=r+1;++i){
		if(s[i]==pre){
			cn++;
			//co i<<":"<<cn<<"  " el;
		}else {
			//co pre<<cn el;
			ans+=cn/2;
			//co "ans"<<ans el;
			cn=0;
			pre=s[i];
			--i;
		}
		//co ans el;
	}
	co ans*k el;

}
/*
ooooooooo
0000000009/2=4
eeeeeeeeee
eeeeeeeeee10/2=5
*/
