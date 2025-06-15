#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<numeric>
using namespace std;
#define ll long long
int main(){
	long long n,l,r;
	scanf("%lld %lld %lld",&n,&l,&r);
	long long ans=r*n;
	long long a[200005];
	long long pre=0;
	for(int i = 0;i<n;i++){
		scanf("%lld",&a[i]);
		pre=min(pre+a[i],(i+1)*l);
		ans=min(ans,(n-i-1)*r+pre);  
		cout<<"pre"<<pre<<" "<<ans<<endl;
	}
	printf("%lld\n",ans);
}
