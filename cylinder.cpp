#include<iostream>
#include<vector>
#include<queue>
#define ll long long
using namespace std;
int main(){
	ll q;
	cin>>q;
	ll op,x,c,ret,cost;
	queue<pair<ll,ll>>que;
	while(q--){
		cin>>op;
		if(op==1){
			cin>>x>>c;
			que.push({x,c});
		}else if (op==2){
			cin>>c;
			ret=0;
			while(c){
				auto x=que.front();
				cost=min(x.second,c);
				ret+=x.first*min(x.second,c);
				c-=cost;
				que.front().second-=cost;
				if(!x.second){
					que.pop();
				}
			}
			cout<<ret<<endl;
		}
	}
}
