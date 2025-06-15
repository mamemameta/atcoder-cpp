#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;
ll calc(const ll n,const vector<vector<ll>> &v){
	ll table=(1<<2*n)-1;
	ll ret=0;
	cout<<table<<endl;
	vector<pair<ll,ll>>vec;
	if(vec.size()==n){
		int ret=0;
		for(auto p:vec)
			ret^=(v[p.first][p.second]);
	}
	int l;
	for(int i=1;i<=2*n;++i){
		if(table>>i&1){
			l=i;
			break;
		}
	}
	table^=1<<l;
	for(int i=1;i<=2*n;++i){
		if(table>>i&1){
			vec.push_back({l,i});
			table^=1<<i;
			ret=max(ret,calc(n,v));
			vec.pop_back();
			table^=1<<i;
		}
	}
	table^=1<<l;
	return ret;

}
int main(){
	static ll n;
	cin>>n;
	static vector<vector<ll>>v(2*n+1,vector<ll>(2*n+1));
	for(ll i=1;i<2*n;++i){
		for(ll j=1+i;j<=2*n;++j){
			cin>>v[i][j];
		}
	}
			for(auto i:v){
				for(auto x:i)
					cout<<x<<" ";
				cout<<endl;
			}
	ll ans=0;
	cout<<calc(n,v)<<endl;
	//2027025

}
