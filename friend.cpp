#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
using namespace std;
#define ll long long

int lis[101][101];
int main(){
	ll n,m;
	cin>>n>>m;
	ll k,x;
	vector<ll>v;
	while(m--){
		cin>>k;
		while(k--){
			cin>>x;
			v.push_back(x);
		}
		for(auto i=v.begin();i!=v.end();++i){
			for(auto j=i;j!=v.end();++j){
				++lis[*i][*j];
			}
		}
		v.clear();
	}
	for(ll i=1;i<=n;++i){
		for(ll j=i+1;j<=n;++j){
			if(lis[i][j]==0){
				cout<<"No"<<endl;
				return 0;
			}
		}
	}
	cout<<"Yes"<<endl;
}
