#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#define ll long long
using namespace std;
static ll n,m,k;
bool chk(const ll ans,const vector<ll>&v){
	vector<ll>b(n);
	for(ll j=0;j<n;++j){
		ll need=ans;
		for(ll i=30;i>=0;--i){
			if(v[j]>>i&1){
				need|=1<<i;
			}
			if(!(v[j]>>i&1)&&need>>i&1)
				break;
		}
		b[j]=need-v[j];
	}
	nth_element(b.begin(),b.begin()+k,b.end());
	return accumulate(b.begin(),b.begin()+k,0ll)<=m;
}

int main(){
	cin>>n>>m>>k;
	static vector<ll>a(n);
	for(ll &x:a)
		cin>>x;
	static ll ans=0;
	for(ll i=30;i>=0;--i){
		ans|=1<<i;
		if(!chk(ans,a)){
			ans^=1<<i;
		}
	}
	cout<<ans<<endl;
}
