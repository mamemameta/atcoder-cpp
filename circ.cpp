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
#define pll pair<ll,ll> 
#define puf push_front
#define pub push_back
#define pof pop_front()
#define pob pop_back()
#define fs first
#define se second
#define fr front()
#define bk back()
#define db double
int main(){
	ll n,m;
	cin>>n>>m;
	string ans(n,'a');
	ll s;char c;
	while(m--){
		cin>>s>>c;
		--s;
		if(n!=1&&s==0&&c=='0'){
			cout<<-1<<endl;
			return 0;
		}else if(ans[s]!='a'&&ans[s]!=c){
			cout<<-1<<endl;
			return 0;
		}else{
			ans[s]=c;
		}
	}
	for(ll i=0;i<n;++i){
		if(ans[i]=='a'){
			if(i==0&&n!=1)
				cout<<1;
			else
				cout<<0;
		}else
			cout<<ans[i];
	}
	cout<<endl;
}
