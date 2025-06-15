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

int main(){
	ll n;cin>>n;
	string s,t;cin>>s>>t;
	ll sum=0,hs,ht;
/*
	for(ll i=0;i<n;++i)
		cout<<s[i];
	cout<<endl;
	for(ll i=0;i<n;++i)
		cout<<t[i];
	cout<<endl;
*/
	for(ll i=0;i<n;++i){
		sum+=(s[i]!=t[i]);
	}
	//cout<<"sum"<<sum<<endl;
	if(sum&1){
		cout<<-1<<endl;
		return 0;
	}
	hs=sum/2,ht=sum/2;
	string u;
	for(ll i=0;i<n;++i){
		//cout<<"hs"<<hs<<"ht"<<ht<<endl;
		if(s[i]==t[i]){
			//cout<<"a";
		u.push_back('0');
		}
		else {
			if(ht==0){
				//cout<<"b";
				u.push_back(t[i]);
			}else if(hs==0){
				//cout<<"c";
				u.push_back(s[i]);
			}else{
				u.push_back('0');
				if(s[i]=='1'){
					//cout<<"d";
					hs--;
				}else{
					//cout<<"e";
					ht--;
				}
			}
		}
	}
	cout<<u<<endl;
}
