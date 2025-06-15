#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
using namespace std;
#define ll long long

int main(){
	ll n,k;
	cin>>n>>k;
	deque<ll>que;
	ll x;
	while(n--){
		cin>>x;
		que.push_back(x);
	}
	while(k--){
		que.pop_front();
		que.push_back(0);
	}
	while(!que.empty()){
		cout<<que.front()<<' ';
		que.pop_front();
	}
	cout<<endl;
}
