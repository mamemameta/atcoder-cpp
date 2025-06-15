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
db dist(ll x,ll y,ll xx,ll yy){
	return((x-xx)*(x-xx)+(y-yy)*(y-yy));
}
int main(){
	db r,x,y;
	cin>>r>>x>>y;
	db dis=dist(x,y,0,0);
	ll k=sqrt(dis)/r;
	//cout<<k*k*r*r<<":"<<dis<<endl;
	if(k*k*r*r==dis){
		cout<<k<<endl;
	}else{
		if(k==0){
			cout<<2<<endl;
		}else{
			cout<<k+1<<endl;
		}
	}
}
