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
#define inf 1000000000
int main(){
	ll n,s,a;
	cin>>n>>s>>a;
	if(a!=inf){
		while(s--){
			cout<<a<<" ";
			n--;
		}
		while(n--){
			cout<<inf<<" ";
		}
		cout<<endl;
	}else{
		while(s--){
			cout<<a<<" ";
			n--;
		}
		while(n--){
			cout<<1<<" ";
		}
		cout<<endl;

	}
}
