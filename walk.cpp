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
	ll x,k,d;cin>>x>>k>>d;
	x=max(x,-x);
	ll q=x/d,r=x%d;
	if(k<=q){
		cout<<(x-(k*d))<<endl;
	}else{
		cout<<((k-q)%2==0?r:d-r)<<endl;
	}
}
