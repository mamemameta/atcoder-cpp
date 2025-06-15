#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<stack>
using namespace std;
#define endl "\n"
#define ll long long
#define M 8611686018427387904
#define N 1001
int main(){
	stack<ll>l; stack<pair<ll,ll>>p;
	char c; ll sum=0;
	for(ll i=0;cin>>c;++i){
		if(c=='\\')l.push(i);
		else if(c=='/'&&!l.empty()){
			ll j=l.top();l.pop();
			sum+=i-j; ll a=i-j;
			while(!p.empty()&&p.top().first>j){
				a+=p.top().second;p.pop();
			}
			p.push(make_pair(j,a));
		}
	}
	vector<ll>ans;
	while(!p.empty()){
		ans.push_back(p.top().second);p.pop();
	}
	reverse(ans.begin(),ans.end());
	cout<<sum<<endl; cout<<ans.size();
	for(ll i=0;i<ans.size();++i)
		cout<<" "<<ans[i];
	cout<<endl;
}
