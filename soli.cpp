#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
using namespace std;
#define ll long long

int main(){
	ll n,m;
	cin>>n>>m;
	ll ans=0,a;
	multiset<ll>lis;
	for(ll i=0;i<n;++i){
		cin>>a;
		lis.insert(a);
		ans+=a;
	}
	auto s=lis.begin();
	while(1){
		if(s==next(lis.end(),-1)){
			cout<<0<<endl;
			return 0;
		}
		if((*s!=*(next(s,1))&&(*s+1)%m!=(*(next(s,1))%m)))
			break;
		++s;
	}
	auto it=++s;
	auto itt=it;
	ll lar=0;
	do{
		ll tmp=0;
		while(1){
			itt=next(it,1);
			if(itt==lis.end())
				itt=lis.begin();
			tmp+=*it;
			if((*it!=*(itt)&&(*it+1)%m!=(*(itt))%m))
				break;
			it=itt;
		}
		it=itt;
		lar=max(tmp,lar);
	}while(it!=s);
	cout<<ans-lar<<endl;
}
