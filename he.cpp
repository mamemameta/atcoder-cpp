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
	ll x;
	cin>>x;
	ll k=x;
	ll ans=-1;
	ll tmp=0,cnt=0;
	for(ll i=2;i*i<=k;++i){
		if(k%i!=0){
			continue;
		}
		cnt=0;
		while(k%i==0){
			k/=i;
			cnt++;
		}
		tmp=0;
		while(cnt>0){
			tmp+=i;
			x=tmp;
			while(x%i==0){
				x/=i,cnt--;
			}
		}
		ans=max(tmp,ans);
	}
	cout<<max(ans,k)<<endl;

}
