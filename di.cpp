#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<numeric>
#include<cmath>
using namespace std;
#define ll long long
#define mkp make_pair
#define vll vector<ll> 
#define pll pair<ll,ll> 
#define puf push_front
#define pub push_back
#define pof pop_front()
#define pob pop_back()
#define fs first
#define se second
#define fr front()
#define bk back()
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define ff(i,x,y) for(ll i=x;i<y;++i)
#define co cout<<
#define el <<endl;
#define ci cin>>
#define fa(i,v) for(auto &i:v)




int main(){
	double n,k;ci n>>k;
	vector<double> v(n);
	fa(i,v)
		ci i;
	vector<double> acc(n+5);
	ff(i,0,n){
		acc[i+1]+=acc[i]+(v[i]+1)/2;
	}
	double ans=-1;
	ff(i,k,n+1){
		ans=max(ans,acc[i]-acc[i-k]);
	}
	printf("%.10f\n",ans);
}
