#include<iostream>
#include<vector>
using namespace std;
#define ll long long

int main(){
	ll n;
	cin>>n;
	vector<ll>a(2*n+2);
	ll x;
	for(ll i=1;i<=n;++i){
		cin>>x;
		a[2*i+1]=a[2*i]=a[x]+1;
	}
	for(ll i=1;i<=2*n+1;++i)
		cout<<a[i]<<endl;
}

