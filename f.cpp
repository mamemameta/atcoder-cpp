#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;
int main(){
	ll n,m,k;
	cin>>n>>m>>k;
	vector<ll>v;
	ll a;
	for(int i=0;i<n;++i){
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	reverse(v.begin(),v.end());
	vector<ll>vv;
	for(int i=0;i<k;++i){
		vv.push_back(v[i]);
	}
	reverse(vv.begin(),vv.end());
	/*
	for(int i=0;i<k;++i)
		cout<<vv[i]<<" ";
	cout<<endl;
	*/
	ll sum=0,cnt=1,idx;
	for(int i=0;i<k-1;++i,++cnt){
		if((vv[i+1]-vv[i])*cnt<m){
			//cout<<"diff"<<(vv[i+1]-vv[i])*cnt<<endl;
			sum+=(vv[i+1]-vv[i])*cnt;
			m-=(vv[i+1]-vv[i])*cnt;
		}else{
			idx=i;
			//cout<<"idx"<<idx<<endl;
			for(int i=0;i<idx;++i){
				vv[i]=vv[idx];
			}
			break;
		}
		if(i==k-2){
			idx=++i;
			sum+=(vv[i+1]-vv[i])*cnt;
			//cout<<"idx"<<idx<<endl;
			for(int i=0;i<idx;++i){
				vv[i]=vv[idx];
			}
		}
	}
	for(int i=0;i<k;++i){
		vv[i]+=m/k;
	}
	m-=(m/k)*k;
	//cout<<"m"<<m<<endl;
	if(m){
		for(int i=1;i<m;++i){
			if(!(i&vv[0])){
				for(int j=0;j<idx;++j){
					vv[j]+=i;
					m-=i;
				}
			}
			if(!m){
				break;
			}
		}
		vv[0]+=m;
	}
	//vv[0]+=m-(m/k)*k;
	/*
	for(int i=0;i<k;++i)
		cout<<vv[i]<<" ";
	cout<<endl;
	*/
	ll ans=vv[0];
	for(int i=1;i<k;++i){
		ans&=vv[i];
	}
	cout<<ans<<endl;
}
