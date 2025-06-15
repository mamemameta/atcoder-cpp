#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<numeric>
using namespace std;
#define ll long long

ll X,Y;
vector<ll>mr(11,-1),mb(11,-1);
ll blue(ll n);
ll red(ll n){
	if(mr[n]!=-1){
		return mr[n];
	}
	if(n==1)
		return 0;
	return mr[n]=red(n-1)+X*blue(n);
}
ll blue(ll n){
	if(mb[n]!=-1)
		return mb[n];
	if(n==1)
		return 1;
	return mb[n]=red(n-1)+Y*blue(n-1);
}
int main(){
	ll n;
	cin>>n>>X>>Y;
	cout<<red(n)<<endl;
}
