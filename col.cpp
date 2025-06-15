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
#define all(x) x.begin(),x.end()
#define ral(x) x.rbegin(),x.rend()
#define ff(i,x,y) for(ll i=x;i<y;++i)
#define co cout<<
#define el <<endl;
#define ci cin>>
#define fa(i,v) for(auto &i:v)
#define re return 0;
int main(){
	co (33^0) el;
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;ci n;
	vll v(8);
	ll a,cnt=0;
	while(n--){
		ci a;
		if(a<400){
			v[0]=1;
		}else if(a<800){
			v[1]=1;
		}else if(a<1200){
			v[2]=1;
		}else if(a<1600){
			v[3]=1;
		}else if(a<2000){
			v[4]=1;
		}else if(a<2400){
			v[5]=1;
		}else if(a<2800){
			v[6]=1;
		}else if(a<3200){
			v[7]=1;
		}else{
			cnt++;
		}
	}
	ll s=accumulate(all(v),0LL);
	if(s==0){
		co (cnt>0)<<" "<<cnt el;
	}else{
		co s<<" "<<s+cnt el;
	}
}
