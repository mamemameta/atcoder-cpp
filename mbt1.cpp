#include<iostream>
#include<deque>
#define ll long long
using namespace std;
int main(){
	ll n,x;
	cin>>n>>x;
	deque<int>dqe;
	char c;
	while(x){
		dqe.push_front(x&1);
		x>>=1;
	}
	while(n--){
		cin>>c;
		if(c=='U'){
			dqe.pop_back();
		}else if(c=='L'){
			dqe.push_back(0);
		}else{
			dqe.push_back(1);
		}
	}
	ll ans=0;
	while(!dqe.empty()){
		ans+=dqe.front();
		ans<<=1;
		dqe.pop_front();
	}
	ans>>=1;
	cout<<ans<<endl;
}
