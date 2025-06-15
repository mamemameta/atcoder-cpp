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
	map<ll,set<ll>>mpx,mpy;
	ll r,c;
	while(n--){
		cin>>r>>c;
		mpx[r].insert(c);
		mpy[c].insert(r);
	}
	ll q;
	cin>>q;
	char d;ll l;
	while(q--){
		cin>>d>>l;
		//1,3,6
		if(d=='L'){
			ll tmp=max(cs-l,1ll);
			auto itr=mpx.find(rs);
			if(itr!=mpx.end()){
				auto it=mpx[rs].upper_bound(cs);
				if(it!=mpx[rs].begin()){
					--it;
					if(tmp<=*it&&*it<cs){
						cs=*it+1;
					}else{
						cs=tmp;
					}
				}else{
					cs=tmp;
				}
			}else{
				cs=tmp;
			}
		}else if(d=='U'){
			ll tmp=max(rs-l,1ll);
			auto itr=mpy.find(cs);
			if(itr!=mpy.end()){
				auto it=mpy[cs].upper_bound(rs);
				if(it!=mpy[cs].begin()){
					--it;
					if(tmp<=*it&&*it<rs){
						rs=*it+1;
					}else{
						rs=tmp;
					}
				}else{
					rs=tmp;
				}
			}else{
				rs=tmp;
			}
		}else if(d=='R'){
			ll tmp=min(cs+l,w);
			auto itr=mpx.find(rs);
			if(itr!=mpx.end()){
				auto it=mpx[rs].lower_bound(cs);
				if((!mpx[rs].empty())&&cs<*it&&*it<=tmp)
					cs=*it-1;
				else{
					cs=tmp;
				}
			}else{
				cs=tmp;
			}
		}else{//D
			ll tmp=min(rs+l,h);
			auto itr=mpy.find(cs);
			if(itr!=mpy.end()){
				auto it=mpy[cs].lower_bound(rs);
				if((!mpy[cs].empty())&&rs<*it&&*it<=tmp)
					rs=*it-1;
				else{
					rs=tmp;
				}
			}else{
				rs=tmp;
			}
		}
		cout<<rs<<" "<<cs<<endl;
	} 
}
