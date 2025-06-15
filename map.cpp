#include<iostream>
#include<map>
#include<set>
#define ll long long
using namespace std;
int main(){
	map<ll,set<ll>>mp;
	mp[3].insert(2);
	auto it=mp[2].upper_bound(1);
	--it;
	cout<<*it<<endl;
}
