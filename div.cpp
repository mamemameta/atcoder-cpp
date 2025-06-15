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
	ll n;
	cin>>n;
	vector<ll>v(n);
	for(auto &x:v)
		cin>>x;
	ll ans=0,g=v[0],tmp;
	for(ll i=1;i<n;++i){
		g=gcd(v[i],g);
	}
	for(ll i=0;i<n;++i){
		tmp=v[i]/g;
		while(tmp%2==0){
			ans++;
			tmp/=2;
		}
		while(tmp%3==0){
			ans++;
			tmp/=3;
		}
		if(tmp!=1){
			cout<<-1<<endl;
			return 0;
		}
	}
	cout<<ans<<endl;
}
