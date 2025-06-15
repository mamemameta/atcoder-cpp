#include<iostream>
#include<vector>
#include<set>
#include<map>
using namespace std;
#define ll long long
#define M 998244353

int main(){
	vector<string>v(9);
	for(ll i=0;i<9;++i){
		cin>>v[i];
	}
	ll ans=0;
	for(ll idx=0;idx<9;++idx){
		for(ll col=0;col<9;++col){
			if(v[idx][col]=='#'){
				for(ll k=1;idx+k<9&&col+k;++k){
					if(v[idx+k][col]=='#'&&v[idx+k][col+k]=='#'&&v[idx][col+k]=='#'){
						++ans;
					}
				}
				for(ll x=1;x<=9;++x){
					for(ll y=1;y<=9;++y){
						if(col+y<9&&idx+y+x<9&&0<=col-x){
							if(v[idx+y][col-x]=='#'&&v[idx+x][col+y]=='#'&&v[idx+x+y][col-x+y]=='#'){
								++ans;
							}
						}
					}
				}
			}
		}
	}
	cout<<ans<<endl;
}
