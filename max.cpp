#include<iostream>
#include<map>
#define ll long long
using namespace std;
int main(){
	map<ll,ll>map;
	ll q;
	cin>>q;
	int op;
	ll x,c;
	while(q--){
		cin>>op;
		switch(op){
			case 1:
				cin>>x;
				++map[x];
				break;

			case 2:
				cin>>x>>c;
				map[x]-=min(c,map[x]);
				if(map[x]==0){
					map.erase(x);
				}
				break;
			case 3:
				cout<<(map.rbegin()->first)-(map.begin()->first)<<endl;
				break;
			default:
				cout<<"error"<<endl;
				break;
		}
	}
}
