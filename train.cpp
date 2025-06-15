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

int main(){
	ll n;cin>>n;
	ll ans=0;
	while(n--){
		ll a;cin>>a;
		while((a&1)==0){
			ans++;
			a>>=1;
		}
	}
	cout<<ans<<endl;
}
