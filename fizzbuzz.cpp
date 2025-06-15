#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<numeric>
#define ll long long
using namespace std;
int main(){
	ll n,a,b;
	cin>>n>>a>>b;
	ll ae=n/a*a,be=n/b*b,ab=lcm(a,b),abe=n/ab*ab;
	ll ans=(a+ae)*ae/a+(b+be)*be/b-(ab+abe)*abe/ab;
	ll sum=(1+n)*n/2;
	
	cout<<sum-ans/2<<endl;
}
