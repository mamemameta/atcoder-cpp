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
	ll ans=pow(3,n);
	ll tmp=1;
	ll a;
	while(n--){
		cin>>a;
		tmp*=(a&1?1:2);
	}
	cout<<ans-tmp<<endl;
}
