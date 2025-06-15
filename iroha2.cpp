#include<iostream>
#include<vector>
#include<set>
#define ll long long
using namespace std;
int main(){
	ll n,p,q,r;
	cin>>n>>p>>q>>r;
	set<ll>s={0};
	ll tmp,sum=0;
	for(int i=0;i<n;++i){
		cin>>tmp;
		s.insert(sum+=tmp);
	}
	for(auto i:s){
		if(s.find(i+p)!=s.end()\
				&&s.find(i+p+q)!=s.end()\
				&&s.find(i+p+q+r)!=s.end()){
			cout<<"Yes"<<endl;
			return 0;
		}
	}
	cout<<"No"<<endl;
}
