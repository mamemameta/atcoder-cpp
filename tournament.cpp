#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<numeric>
using namespace std;
#define ll long long

int main(){
	ll n;
	cin>>n;
	vector<string>v(n);
	for(auto &i:v)
		cin>>i;
	for(ll i=0;i<n;++i){
		for(ll j=0;j<n;++j){
			if(v[j][i]!=(v[i][j]=='D'?'D':(v[i][j]='W'?'L':'W'))){
				cout<<"incorrect"<<endl;
				return 0;
			}
			/*
			   if(i==j){
			   continue;
			   }else if(v[i][j]=='W'&&v[j][i]!='L'){
			   cout<<"incorrect"<<endl;
			   return 0;
			   }else if(v[i][j]=='L'&&v[j][i]!='W'){
			   cout<<"incorrect"<<endl;
			   return 0;
			   }else if(v[i][j]=='D'&&v[j][i]!='D'){
			   cout<<"incorrect"<<endl;
			   return 0;
			   }
			//*/
		}
	}
	cout<<"correct"<<endl;

}
