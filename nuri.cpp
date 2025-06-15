#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
using namespace std;
#define ll long long
ll v[307][307];
int main(){
	ll H,W,N,h,w;
	cin>>H>>W>>N>>h>>w;
	map<ll,ll>mp;
	for(ll i=0;i<H;i++){
		for(ll j=0;j<W;j++){
			cin>>v[i][j];
			mp[v[i][j]]++;
		}
	}
	map<ll,ll>mpp;
	for(ll i=0;i<=H-h;++i){
		for(ll ii=0;ii<h;++ii){
			for(ll kk=0;kk<w;++kk){
				mpp[v[i+ii][kk]]++;
			}
		}
		/*
		   for(auto it=mpp.begin();it!=mpp.end();++it){
		   cout<<it->first<<":"<<it->second<<endl;
		   }
		   cout<<"........"<<endl;
		//*/
		for(ll j=0;j<=W-w;++j){
			ll ans=mp.size();
			auto it=mpp.begin();
			for(;it!=mpp.end();it++){
				auto itt=mp.find(it->first);
				if(itt!=mp.end()){
					if(itt->second==it->second)
						ans--;
				}
			}
			cout<<ans<<" ";
			if(j+w<W){
				for(ll kk=0;kk<h;++kk){
					mpp[v[i+kk][j]]--;
				}
				for(ll kk=0;kk<h;++kk){
					mpp[v[i+kk][j+w]]++;
				}
			}
			/*
			   for(auto it=mpp.begin();it!=mpp.end();++it){
			   cout<<it->first<<":"<<it->second<<endl;
			   }
			   cout<<"........"<<endl;
			//*/
		}
		cout<<endl;
		for(ll ii=0;ii<h;++ii){
			for(ll kk=0;kk<w;++kk){
				mpp[v[i+ii][W-1-kk]]--;
			}
		}
	}

}
