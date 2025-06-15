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
#define puf push_front
#define pub push_back
#define pof pop_front
#define pob pop_back
#define fst first
#define snd second
string s,t;
int main(){
	cin>>s>>t;
	deque<pll>a,b;
	a.push_back(mkp(s[0],1));
	for(ll i=1;i<s.length();++i){
		if(a.back().first==s[i]){
			a.back().second++;
		}else{
			a.pub(mkp(s[i],1));
		}
	}
	b.push_back(mkp(t[0],1));
	for(ll i=1;i<t.length();++i){
		if(b.back().first==t[i]){
			b.back().second++;
		}else{
			b.pub(mkp(t[i],1));
		}
	}
	while(!a.empty()&&!b.empty()){
		pair<char,ll>af=a.front(),bf=b.front();
		if(af.fst!=bf.fst)
			break;
		else if(af.snd==bf.snd){
			a.pof();
			b.pof();
		}else if(af.snd!=1&&af.snd<bf.snd){
			a.pof();
			b.pof();
		}else{
			break;
		}
	}
	cout<<(a.empty()&&b.empty()?"Yes":"No")<<endl;
}
