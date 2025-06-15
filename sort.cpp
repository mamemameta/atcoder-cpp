#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long
#define N 20
int main(){
	vector<ll>v(N);
	for(ll i=0;i<N;++i){
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	for(ll i=1;i<=N;++i)
		printf("%2d ",i);
	cout<<endl;
	for(auto x:v)
		cout<<x<<" ";
	cout<<endl;
}
