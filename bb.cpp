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
	ll a=11,b=-11,c=100,d=-100;
	vector<string>v(10);
	for(ll i=0;i<10;++i){
		cin>>v[i];
	}
	for(ll i=0;i<10;++i){
		for(ll j=0;j<10;++j){
			if(v[i][j]=='#'){
				a=min(i,a);
				b=max(i,b);
				c=min(j,c);
				d=max(j,d);
			}
		}
	}
	cout<<++a<<" "<<++b<<endl;
	cout<<++c<<" "<<++d<<endl;
}
