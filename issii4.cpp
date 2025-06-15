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
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;ci s;
	ll k;ci k;
	ll n=(ll)s.length();
	if(s==string(n,s[0])){
		co n*k/2 el;
	}else{
		ll ans1=0;
		for(ll i=0;i+1<n;++i){
			if(s[i]==s[i+1]){
				ans1++;
				i++;
			}
		}
		ll ans2=0;
		for(ll i=0;i+1<2*n;++i){
			if(s[(i)%n]==s[(i+1)%n]){
				ans2++;
				i++;
			}
		}
		co ans1+(ans2-ans1)*(k-1) el;
	}
}

