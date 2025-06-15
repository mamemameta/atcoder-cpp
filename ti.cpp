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
	vector<vector<ll>>v(3,vll(3));
	fa(i,v)
		fa(j,i)
		ci j;
	vll h(3),w=v[0];
	h[1]=v[1][0]-v[0][0];
	h[2]=v[2][0]-v[0][0];
	/*
	co "hhh" el;
	fa(i,h)
		co i<<" ";
	co endl;
	*/

	ll d=-*min_element(all(h));
	fa(i,h)
		i+=d;
	fa(i,w)
		i-=d;
	/*
	fa(i,h)
		co i<<" ";
	co endl;
	fa(i,w)
		co i<<" ";
		*/
	ff(i,0,3)
		ff(j,0,3)
		if(v[i][j]!=h[i]+w[j]){
			co "No" el;
			return 0;
		}
	co "Yes" el;
	
}
