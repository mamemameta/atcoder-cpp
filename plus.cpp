#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
const int M=5e5+10;
int n,m,k;
ll a[M],b[M];
bool chk(int ans){
	for(int i=1;i<=n;++i){
		int need =ans;
		for(int j=30;j>=0;--j){
			if(a[i]>>j&1)
				need|=(1<<j);
			if(!(a[i]>>j&1)&&(ans>>j&1))
				break;
		}
		b[i]=need-a[i];
		cout<<"need"<<need<<endl;
	}
	for(int i=1;i<=n;++i)
		cout<<b[i]<<" ";
	cout<<endl;
	sort(b+1,b+n+1);
	ll tar=0;
	for(int i=1;i<=k;++i)
		tar+=b[i];
	return tar<=m;
}
int main(){
	cin>>n>>m>>k;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	int ans=0;
	for(int i=30;i>=0;--i){
		ans|=(1<<i);
		if(!chk(ans))ans^=(1<<i);
		cout<<"ans"<<ans<<endl;
	}
	cout<<ans<<endl;
}
