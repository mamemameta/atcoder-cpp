#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;
static ll n,m,k;
bool chk(ll ans,vector<ll>&v,vector<ll>&b){
	for(int i=0;i<n;++i){
		ll need=ans;
		for(int j=30;j>=0;--j){
			if(v[i]>>j&1){
				need|=1<<j;
			}
			if((!(v[i]>>j&1))&&(need>>j&1)){
				if(i==3)
				cout<<v[i]<<" "<<j<<endl;
				break;
			}
		}
		b[i]=need-v[i];
	}
	ll sum=0;
	sort(b.begin(),b.end());
	for(int i=0;i<k;++i)
		sum+=b[i];
	return sum<=m;
}
int main(){
	if(!true&&true)
		cout<<"true"<<endl;
	if(!false&&false){
		cout<<"no"<<endl;
		return 0;
	}
	if(!true&&false){
		cout<<"No"<<endl;
		return 0;
	}
	cin>>n>>m>>k;
	static vector<ll>v(n);
	static vector<ll>b(n);
	for(int i=0;i<n;++i){
		cin>>v[i];
	}
	static ll ans=0;
	for(int i=30;i>=0;--i){
		ans|=1<<i;
		if(!chk(ans,v,b))
			ans^=1<<i;
	}
	cout<<ans<<endl;
}
