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

int main(){
	string s;cin>>s;
	string a="KIHBR";
	ll now=0;
	ll i;
	vll v={0,3,4,5},cnt(10);
	for(i=0;i<s.length();++i){
		if(s[i]=='A'&&count(all(v),now)&&cnt[now]==0){
			cnt[now]++;
			continue;
		}else if(a[now]==s[i]){
			now++;
			continue;
		}else{
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<(now==a.length()?"YES":"NO")<<endl;
}
