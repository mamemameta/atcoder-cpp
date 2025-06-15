#include<iostream>
#include<vector>
#include<map>
#include<set>
#define ll long long
constexpr ll M=1e9;
using namespace std;

int main(){
	ll h,w,rs,cs;
	cin>>h>>w>>rs>>cs;
	ll n;
	cin>>n;
	map<ll,set<ll>>mpr,mpc;
	ll r,c;
	while(n--){
		cin>>r>>c;
		mpr[r].insert(c);
		mpc[c].insert(r);
	}
	r=rs,c=cs;
	ll q;
	cin>>q;
	char op;ll cnt;
	while(q--){
		cin>>op>>cnt;
		if(op=='R'){
			auto it=mpr[r].lower_bound(c);
			if(it!=mpr[r].end()){
				c=min(*it-1,c+cnt);
			}else{
				c+=cnt;
			}
		}
		if(op=='D'){
			auto it=mpc[c].lower_bound(r);
			if(it!=mpc[c].end()){
				r=min(*it-1,r+cnt);
			}else{
				r+=cnt;
			}
		}
		if(op=='L'){
			auto it=mpr[r].lower_bound(c);
			if(it!=mpr[r].begin()){
				c=max(*prev(it)+1,c-cnt);
			}else{
				c-=cnt;
			}
		}
		if(op=='U'){
			auto it=mpc[c].lower_bound(r);
			if(it!=mpc[c].begin()){
				r=max(*prev(it)+1,r-cnt);
			}else{
				r-=cnt;
			}
		}
		r=min(h,r);
		r=max(1ll,r);
		c=min(w,c);
		c=max(1ll,c);
		cout<<r<<" "<<c<<endl;
	}
}
