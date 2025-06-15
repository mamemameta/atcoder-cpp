#include<iostream>
#include<vector>
#include<queue>
#define ll long long
using namespace std;
int main(){
	ll n,p,q,r;
	cin>>n>>p>>q>>r;
	vector<ll>v(n);
	for(auto &i:v)
		cin>>i;
	queue<ll>Q,qq,qqq;
	ll s=0,ss=0,sss=0;
	ll a=0,aa,aaa;
	while(1){
		while(s<p){
			if(a==n){
				cout<<"No"<<endl;
				return 0;
			}
			s+=v[a];
			Q.push(v[a]);
			++a;
		}
		if(s!=p){
			s-=Q.front();
			Q.pop();
			continue;
		}
		aa=a;
		while(ss<q){
			if(aa==n){
				cout<<"No"<<endl;
				return 0;
			}
			ss+=v[aa];
			qq.push(v[aa]);
			++aa;
		}
		if(ss!=q){
			ss-=qq.front();
			Q.push(qq.front());
			s+=qq.front();
			qq.pop();
			continue;
		}
		aaa=aa;
		while(sss<r){
			if(aaa==n){
				cout<<"No"<<endl;
				return 0;
			}
			sss+=v[aaa];
			qqq.push(v[aaa]);
			++aaa;
		}
		if(sss!=r){
			sss-=qqq.front();
			qq.push(qqq.front());
			ss+=qqq.front();
			qqq.pop();
			continue;
		}
		cout<<"Yes"<<endl;
		return 0;
	}

}
