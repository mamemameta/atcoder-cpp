#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<numeric>
using namespace std;
#define ll long long
#define mkp make_pair
#define pll pair<ll,ll> 

int main(){
	ll n,m,x,t,d;
	cin>> n>>m>>x>>t>>d;
	cout<<t-d*(max(0LL,min(n,x)-m))<<endl;
}
