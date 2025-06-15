#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<numeric>
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

int main(){
	ll n;
	cin>>n;
	vector<string>v(n);
	for(ll i=0;i<n;++i)
		cin>>v[i];
	ll dx[]={0,0,1,1,1,-1,-1,-1},dy[]={1,-1,1,0,-1,1,0,-1};
	string a(n,'0'),tmp;
	char c;
	ll m;
	for(ll i=0;i<n;++i){
		for(ll j=0;j<n;++j){
			for(ll k=0;k<8;++k){
				m=0;
				tmp="";
				for(;m<n;++m){
					c=v[(n+i+m*dx[k])%n][(n+j+m*dy[k])%n];
					tmp.pub(c);
				}
				a=max(tmp,a);
			}
		}
	}
	cout<<a<<endl;
		
}
