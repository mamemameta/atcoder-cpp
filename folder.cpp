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
	map<string,ll>mp;
	string s;
	while(n--){
		cin>>s;
		mp[s]++;
		if(mp[s]==1){
			cout<<s<<endl;
		}else{
			cout<<s<<"("<<mp[s]-1<<")"<<endl;
		}
	}
}
