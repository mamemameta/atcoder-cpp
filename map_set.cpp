#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
using namespace std;
#define ll long long

int main(){
	map<ll,set<ll>>mp;
	//mp[3].in
	auto it=mp[3].begin();
	cout<<*it<<endl;
	mp[3].insert(33);
	//it=mp[3].begin();
	while(it!=mp[3].end()){
		cout<<"a"<<*it<<endl;
		++it;
	}
}
