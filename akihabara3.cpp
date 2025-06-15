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
#define ff(i,x) for(long long i=0;i<x;++i)

int main(){
	string s,need="AKIHABARA";
	cin>>s;
	ll p=0;
	ff(i,need.length()){
		if(s[p]==need[i])
			p++;
		else if(need[i]=='A')
			;
		else{
			cout<<"NO"<<endl;
			return 0;
		}
	}
	puts(p==s.length()?"YES":"NO");
}
