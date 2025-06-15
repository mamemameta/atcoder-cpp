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
#define bl bool
#define vec vector 
#define vll vector<ll> 
#define pll pair<ll,ll> 
#define mkp make_pair
#define mll map<ll,ll> 
#define puf push_front
#define pub push_back
#define pof pop_front()
#define pob pop_back()
#define fs first
#define se second
#define fr front()
#define bk back()
#define be begin()
#define all(x) x.begin(),x.end()
#define ral(x) x.rbegin(),x.rend()
#define ff(i,x,y) for(ll i=x;i<y;++i)
#define fa(i,v) for(auto &i:v)
#define re return 
#define rz return 0; 
#define ct continue; 
#define ma(a,x) a=max(a,x)
#define mi(a,x) a=min(a,x)
#define so(v) sort(all(v))
#define rev(v) reverse(all(v))
#define M 8611686018427387904
template<class... A> void co(A... args){ for(auto i:{args...}) cout<<i<<" "; cout<<endl; }; template<class... A> void cl(A... args){ for(auto i:{args...}) cout<<i<<endl; }; template<class... A> void ci(A&... a){ (cin>>...>>a); }; template<class T>void po(T v){fa(i,v)cout<<i<<" ";cout<<endl;} template<class T>void pl(T v){fa(i,v)cout<<i<<endl;} template<class T>void ge(T &v){fa(i,v)cin>>i;}
//O(2*10^8)
//9*10^18
//1LL<<62 4*10^18
// == -> &

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;ci(n);
	string s;ci(s);
	if(n==2){
		   if(s=="AA"||s=="BB"){
				 co("Yes");
				 rz;
		   }else{
				 co("No");
				 rz;
		   }
	}
	if(s[0]=='B'){
		   co("Yes");
		   rz;
	}
	if(*s.rbegin()=='B'){
		   co("No");
		   rz;
	}
	co("Yes");
}
/*ab
 * abb
 * aab
 * aba
 * aaa
 * abbbba
 * abbbab
 * baaaab
 * aaaaab
 * aaabaab
 * baaaaa
 */

