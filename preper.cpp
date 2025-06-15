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
	prev_permutation(v.begin().v.end());
	for(auto &x:v)
		cout<<x<<" ";
	cout<<endl;

}
