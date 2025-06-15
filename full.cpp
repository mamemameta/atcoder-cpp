#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<numeric>
using namespace std;
#define ll long long
ll n,m;
vector<ll>v;
void f(ll x,ll y){
	if(x>n){
		for(auto i:v)
			cout<<i<<" ";
		cout<<endl;
		return;
	}
	for(ll i=max(x,y+1);i<=m-n+x;++i){
		v.push_back(i);
		f(x+1,i);
		v.pop_back();
	}
	return ;
}
int main(){
	cin>>n>>m;
	f(1,0);
}
