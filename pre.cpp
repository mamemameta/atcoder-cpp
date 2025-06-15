#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
using namespace std;
#define ll long long

int main(){
	ll n;
	cin>>n;
	vector<ll>v(n);
	for(auto &x:v)
		cin>>x;
	auto it=v.rbegin();
	for(;*next(it)<*it;++it)
		;
	sort(v.rbegin(),next(it));
	swap(*next(it),*prev(lower_bound(v.rbegin(),next(it),*next(it))));
	for(auto i:v)
		cout<<i<<" ";
	cout<<endl;
}
