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

int main(){
	double h,w,x,y;
	cin>>w>>h>>x>>y;
	ll d=0;
	if(h/2==y&&w/2==x)
		d++;
	printf("%.12f %lld\n",h*w/2,d);
}
