#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
#define ll long long

int main(){
	int n,x,y;
	cin>>n>>x>>y;
	priority_queue<ll>que;
	ll a;
	cin>>a;
	x-=a;
	for(ll i=0;i<n-1;++i){
		cin>>a;
		que.push(a);
	}
	if(abs(x)<abs(y))
		swap(x,y);
	while(x&&!que.empty()){
		if(x>0){
			x-=que.top();
		}else{
			x+=que.top();
		}
		que.pop();
	}
	while(y&&!que.empty()){
		if(y>0){
			y-=que.top();
		}else{
			y+=que.top();
		}
		que.pop();
	}
	ll z=0;
	while(!que.empty()){
		if(z>0){
			z-=que.top();
		}else{
			z+=que.top();
		}
		que.pop();
	}
	if(!(x||y||z)){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
}
