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
	string s;
	ci s;
	ll n=(ll)s.length();
	if('A'<=s[0]&&s[0]<='Z'&&'A'<=s[n-1]&&s[n-1]<='Z'){
		for(ll i=1;i<n-1;++i){
			if(!('0'<=s[i]&&s[i]<='9')){
				co "No" el;
				return 0;
			}

		}
		if(n==8){
			ll x=stoll(s.substr(1,6));
			if(100000<=x&&x<=999999){
				co "Yes" el;
				return 0;
			}
		}
	}
	co "No" el;
}
