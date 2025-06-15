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

int main(){
	ll N,q;
	cin>>N>>q;
	string s;
	cin>>s;
	ll i=0,n=s.length();
	ll op,x;
	while(q--){
		cin>>op>>x;
		if(op==1){
			i+=n-x;
			i%=n;
			//cout<<"i"<<i<<endl;
		}else{
			cout<<s[(n+x-1+i)%n]<<endl;
		}
	}
}
