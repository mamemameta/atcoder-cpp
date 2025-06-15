#include<iostream>
using namespace std;
#define ll long long
int main(){
	ll x,k;
	cin>>x>>k;
	for(ll i=0;i<k;++i){
		if(x%10>=5){
			x/=10;
			x+=1;
		}else
			x/=10;
	}
	while(k--)
		x*=10;
	cout<<x<<endl;
}
