#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
#define ll long long
static ll n,m,k;
bool chk(const ll ans,const vector<ll>&a){
	vector<ll>b(n);
	for(int i=0;i<n;++i){
		ll need=ans;
		for(int j=30;j>=0;--j){
			if(a[i]>>j&1){
				need|=1<<j;
			}
			if(!(a[i]>>j&1)&&need>>j&1){
				break;
			}
		}
		b[i]=need-a[i];
	}
	nth_element(b.begin(),b.begin()+k,b.end());
	ll sum=accumulate(b.begin(),b.begin()+k,0LL);
	return sum<=m;
}
int main(){
	cin>>n>>m>>k;
	static vector<ll>a(n);
	for(int i=0;i<n;++i)
		cin>>a[i];
	static ll ans=0;
	for(int i=30;i>=0;--i){
		if(!chk(ans|=1<<i,a)){
			ans^=1<<i;	
		}
	}
	cout<<ans<<endl;
}
