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
#define ff(i,x) for(ll i=0;i<x;++i)

int main(){
	string s;cin>>s;
	string need="AKIHABARA";
	ll ptr=0;
	ff(i,need.length()){
		if(ptr<s.length()&&need[i]==s[ptr])
			ptr++;
		else{
			if(need[i]!='A'){
				puts("NO");
				return 0;
			}
		}
	}
	puts((ptr!=s.length()?"NO":"YES"));
}
