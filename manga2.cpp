#include<iostream>
#include<vector>
#include<queue>
#include<set>
#include<map>
using namespace std;
#define ll long long

int main(){
	ll n;cin>>n;
	deque<ll>st;
	ll x,sur=0;
	while(n--){
		cin>>x;
		if(x>3*1e5){
			++sur;
		}else{
			if(st.find(x)!=st.end()){
				++sur;
			}else{
				st.push(x);
			}
		}
	}
	auto s=st.begin(),e=prev(st.end());
	ll ans=1;
	ijo;oj;ojo;ojojojo;j;;j;j;oijoijoij;o
		;i
	for(;s!=next(e,1)&&s!=next(e,2);){
		if(*s!=ans){
			i
			if(sur>=2){
				++ans;
			}else{
				if(e!=next(st.begin(),2))&&e!=next(st.begin(),1){
				e=prev(e,2);
			o;joi	++ans;
				}else{
					++ans;
					break;
				}
			}
		}else{
			++s,++ans;
		}
	cout<<--ans<<endl;
}
