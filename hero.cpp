#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<cmath>
using namespace std;
#define ll long long
double a,b;
double f(ll i){
	return a/sqrt(i+1)+b*i;
}
int main(){
	cin>>a>>b;
	int g=1;
	double tmp,tmp2;
	//int(cbrt((2*b/a)*(2*b/a))),
	double ans=a/sqrt(g);
	ll mid;
	ll it;
	for(ll i=1,e=1e18;i<=e;){
		mid=i+(e-i)/2;
		tmp=f(i);
		tmp2=f(e);
		if(f(mid)>f(mid+1)){
			i=mid+1;
			if(ans>=f(mid)){
				ans=f(mid);
			}
		}else{
			e=mid-1;
			if(ans>=f(mid)){
				ans=f(mid);
			}
		}
		it=mid;
		//cout<<ans<<endl;
	}

	for(ll i=max(it-10000000,1ll),k=0;k<=2*1e7;++k){
		ans=min(f(i+k),ans);
	}
	printf("%.10f\n",ans);
}
