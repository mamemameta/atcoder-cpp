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
#define vll vector<ll> 
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
	ll n,q;cin>>n>>q;
	string s;cin>>s;
	vector<ll>acc(n+6);
	vector<ll>ch={1};
	acc[1]=1;
	for(ll i=1;i<n;++i){
		acc[i+1]=acc[i];
		if(s[i-1]!=s[i]){
			acc[i+1]++;
			ch.pub(i+1);
		}
	}
	/*
	for(auto i:ch){
		cout<<i;
	}
	for(auto i:acc){
		cout<<i<<" ";
	}
	cout<<endl;
	//*/
	while(q--){
		ll l,r;
		cin>>l>>r;
		--l;
		ll kind=(acc[r]-acc[l]);
		ll ans=kind;
		ans/=2;
		auto st_it=lower_bound(ch.begin(),ch.end(),l+1);
		auto ed_it=upper_bound(ch.begin(),ch.end(),r)-1;
		ll st=st_it-ch.begin();
		ll ed=ed_it-ch.begin();
		ll sz=ed-st+1;
		ll mid=(st+ed)/2;
		if((sz>=5||sz==3)&&(s[ch[mid]-1]!=s[ch[mid+2]-1])&&(s[ch[mid-1]-1]!=s[ch[mid+1]-1])){
			//cout<<"yes"<<s[ch[mid]-1]<<s[ch[mid+1]-1]<<s[ch[mid+2]-1];
			ans++;
		}
		/*
		cout<<ch[mid]<<"l"<<l+1<<" r"<<r<<" k"<<(kind)<<" "<<kind/2<<" ";
		cout<<"st"<<st<<"ed"<<ed<<"sz"<<sz<<endl;
		//*/
		cout<<ans<<endl;
	}
}
