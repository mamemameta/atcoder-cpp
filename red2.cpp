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
	ll n,x,y;
	ll r[13]={},b[13]={};
	cin>>n>>x>>y;
	r[n]=1;
	for(ll i=n;i>=2;--i){
		r[i-1]+=r[i];
		b[i]+=r[i]*x;
		r[i-1]+=b[i];
		b[i-1]+=b[i]*y;
	}
	cout<<b[1]<<endl;
}
