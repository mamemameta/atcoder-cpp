#include<iostream>
#include<vector>
#define ll long long
using namespace std;
int main(){
	ll n,p,q,r;
	cin>>n>>p>>q>>r;
	vector<ll>v(n);
	for(auto &i:v)
		cin>>i;
	bool flg=0;
	for(int x=0;x<n;++x){
		ll sum=0;
		//cout<<"x"<<x<<" ";
		ll xe=x;
		while(sum<p){
			sum+=v[xe];
			++xe;
		}
		if(sum!=p)
			continue;
		for(int y=xe;y<n;++y){
			sum=0;
			//cout<<"y"<<y<<" ";
			ll ye=y;
			while(sum<q){
				sum+=v[ye];
				++ye;
			}
			if(sum!=q)
				break;
			for(int z=ye;z<n;++z){
				sum=0;
				//cout<<"z"<<z<<" ";
				while(sum<r){
					sum+=v[z];
					++z;
				}
				if(sum!=r){
					flg=1;
					break;
				}
				//cout<<"w"<<z<<" ";
				cout<<"Yes"<<endl;
				return 0;
			}
			if(flg){
				flg=0;
				break;
			}
		}
	}
	cout<<"No"<<endl;
}
