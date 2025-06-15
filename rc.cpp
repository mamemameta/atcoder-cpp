#include<iostream>
#include<map>
#include<set>
#include<vector>
#define ll long long
using namespace std;
int main(){
	ll n;
	cin>>n;
	multiset<ll>s;
	ll tmp;
	for(ll i=0;i<n;++i){
		cin>>tmp;
		s.insert(tmp);
	}
	ll ans=0;
	while(s.size()!=1){
		tmp=(*s.rbegin())%(*s.begin());
		//s.erase(s.rbegin());
		auto it=s.end();
		s.erase(--it);
		if(tmp!=0){
			s.insert(tmp);
		}
		++ans;
	}
	cout<<ans<<endl;
}
