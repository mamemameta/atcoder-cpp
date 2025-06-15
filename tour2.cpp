#include<iostream>
#include<queue>
#include<map>
#include<vector>
#define ll long long
using namespace std;
map<ll,priority_queue<ll,vector<ll>,greater<>>>mp;
vector<int>used;
void move(int n){
	cout<<n<<endl;
	++used[n];
	int pre=-1,tmp;
	while(!mp[n].empty()){
		if(used[mp[n].top()]){
			pre=mp[n].top();
			mp[n].pop();
			continue;
		}
		tmp=mp[n].top();
		mp[n].pop();
		move(tmp);	
	}
	if(pre==-1){
		return;
	}else{
		move(pre);
	}
}
int main(){
	ll n;cin>>n;
	used.resize(n+1);
	ll a,b;
	--n;
	while(n--){
		cin>>a>>b;
		mp[a].push(b);
		mp[b].push(a);
	}
	move(1);
}
