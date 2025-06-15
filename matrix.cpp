#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;
int main(){
	ll h,w;
	cin>>h>>w;
	vector<vector<ll>>v(h,vector<ll>(w));
	for(auto &x:v)
		for(auto &i:x)
			cin>>i;
	ll hh,ww;
	cin>>hh>>ww;
	vector<vector<ll>>vv(hh,vector<ll>(ww));
	for(auto &x:vv)
		for(auto &i:x)
			cin>>i;
	for(ll i=0;i<1<<h;++i){
		vector<ll>a(hh);
		ll cnt=0;
		int fl=0;
		for(ll j=0;j<h;++j){
			if((i>>j)&1){
				if(cnt>=hh){
					fl;
					break;
				}
				a[cnt++]=j;
			}
		}
		if(fl||cnt!=hh)
			continue;
		/*
		cout<<"a";
		for(auto xxx:a){
			cout<<xxx<<" ";
		}
		cout<<endl;
		*/
		vector<ll>b(ww);
		ll count;
		for(ll k=0;k<1<<w;++k){
			count=0;
			for(ll j=0;j<w;++j){
				if((k>>j)&1){
					if(count>=ww){
						break;
					}
					b[count++]=j;
				}
			}
			if(count!=ww)
				continue;
			/*
		cout<<"b";
		for(auto xx:b){
			cout<<xx<<" ";
		}
		cout<<endl;
		*/
			ll x=0,y=0,flg=0;
			for(;x<hh;++x){
				for(y=0;y<ww;++y){
					if(v[a[x]][b[y]]!=vv[x][y]){
						++flg;
						break;
					}
				}
				if(flg)
					break;
			}
			if(x==hh&&y==ww){
				cout<<"Yes"<<endl;
				return 0;
			}
		}
	}
	cout<<"No"<<endl;
}
