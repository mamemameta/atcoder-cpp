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

ll n,m,i,ans;
ll f(ll x){
	if(x<2||x>n+n)
		return 0;
	return min(x-2+1,n+n-x+1);
}
int main(){
	cin>>n>>m;
	for(ll i=2;i<=n+n;i++)
		ans+=f(i+m)*f(i);
	cout<<ans<<endl;

}
