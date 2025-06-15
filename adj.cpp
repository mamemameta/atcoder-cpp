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
#define coel cout<<endl;
#define ci cin>>
#define fa(i,v) for(auto &i:v)
#define re return 0;
#define ma(a,x) a=max(a,x)
#define mi(a,x) a=min(a,x)
#define so(v) sort(all(v))
#define rev(v) reverse(all(v))
#define rn return 
#define M 8611686018427387904
//O(2*10^8)
//9*10^18
//1LL<<62 4*10^18

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;ci n;
	ll f=0,t=0;
	ll a;
	ff(i,0,n){
		ci a;
		if(a%4==0)
			f++;
		else if((a&1)==0)
			t++;
	}
	ll o=n-f-t;
	//co "f"<<f<<"t"<<t<<"o"<<o el;
	if(t==0){
		if(f>=o-1){
			co "Yes" el;
			re;
		}else{
			co "No" el;
			re;
		}
	}
	if(o>f){
		co "No" el;
		re;
	}
	co "Yes" el;

}

