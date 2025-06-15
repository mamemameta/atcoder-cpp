#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
using namespace std;
#define ll long long

int main(){
	set<ll>s={1,2,4,5,9};
	auto it=s.upper_bound(1);
	advance(it,3);
	cout<<*it<<endl;
	cout<<*next(it,3)<<endl;
	for(ll i=0;i<5;++i){
		cout<<*it<<(it==s.begin()?"yes":"no")<<endl;
		--it;
	}

}
