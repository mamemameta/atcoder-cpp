#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#define ll long long
#define M (998244353)
using namespace std;
ll val(pair<ll,ll>a,pair<ll,ll>b,pair<ll,ll>c){
	return abs((a.first-c.first)*(b.second-c.second)-(b.first-c.first)*(a.second-c.second));
}
set<ll>s;
int main(){
	pair<ll,ll> a,b,c,d;
	cin>>a.first>>a.second>>b.first>>b.second>>c.first>>c.second>>d.first>>d.second;
	//ll m=0;
	if(val(b,c,d)==(val(a,c,d)+val(a,b,c)+val(a,b,d))){
		cout<<"No"<<endl;
		return 0;
	}
	if(val(a,b,d)==(val(a,b,c)+val(a,c,d)+val(b,c,d))){
		cout<<"No"<<endl;
		return 0;
	}
	if(val(a,c,d)==(val(a,b,c)+val(b,c,d)+val(a,b,d))){
		cout<<"No"<<endl;
		return 0;
	}
	if(val(a,b,c)==(val(b,c,d)+val(a,b,d)+val(a,d,c))){
		cout<<"No"<<endl;
		return 0;
	}
	cout<<"Yes"<<endl;
}
