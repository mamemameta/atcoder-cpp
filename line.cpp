#include<iostream>
#include<vector>
using namespace std;
#define ll long long

int main(){
	ll h,w;
	cin>>h>>w;
	vector<ll>v(w);
	string s;
	for(ll i=0;i<h;++i){
		cin>>s;
		for(ll j=0;j<w;++j){
			v[j]+=(s[j]=='#');
		}
	}
	for(auto i:v)
		cout<<i<<" ";
	cout<<endl;
}
