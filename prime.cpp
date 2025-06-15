#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;
int main(){
	ll a,b,c,d;
	cin>>a>>b>>c>>d;
	vector<ll>prime;
	vector<ll>lis(205,1);
	for(ll i=2;i<205;++i){
		if(lis[i]){
			for(ll k=i*i;k<205;k+=i){
				lis[k]=0;
			}
		}
	}
	for(ll i=2;i<205;++i){
		if(lis[i])
			prime.push_back(i);
	}
	for(ll t=a;t<=b;++t){
		if(lower_bound(prime.begin(),prime.end(),t+c)==\
			upper_bound(prime.begin(),prime.end(),t+d)){
			cout<<"Takahashi"<<endl;
			return 0;
		}
	}
	cout<<"Aoki"<<endl;
}
