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
	ll n;cin>>n;
	string s;cin>>s;
	ll nr=count(s.begin(),s.end(),'R'),nw=n-nr;
	ll cnt=(ll)count(s.begin(),(s.begin()+nr),'W');
	cout<<min(nw,cnt)<<endl;
}
