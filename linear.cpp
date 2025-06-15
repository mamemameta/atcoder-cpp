#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include<numeric>
#include<set>
#define ll long long 
#define N (1LL<<20)
//#define N (15)
using namespace std;
vector<ll>a(N,-1LL);
set<ll>v;
void change(ll x){
	ll h=x%N;
	auto it=v.lower_bound(h);
	if(it==v.end()){
		it=v.begin();
	}
	a[*it]=x;
	v.erase(it);
	/*
	for(auto i:v)
		cout<<i<<" ";
	cout<<endl;
	for(auto i:a)
		cout<<i<<" ";
	cout<<endl;
	*/
	//	cout<<h<<"h"<<h%N<<":"<<a[h%N]<<endl;
}
int main(){
	for(int i=0;i<N;++i)
		v.insert(i);
	//cout<<(1LL<<20)<<endl;
	ll q;
	cin>>q;
	ll t,x;
	while(q--){
		cin>>t>>x;
		switch(t){
			case 1:
				change(x);
				break;
			case 2:
				cout<<a[x%N]<<endl;
				break;
			default:
				cout<<"error"<<endl;
				return 0;
				break;
		}
		
	}
}

