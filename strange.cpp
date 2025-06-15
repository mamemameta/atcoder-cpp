#include<iostream>
#include<vector>
#include<utility>
#include<deque>
#define ll long long
using namespace std;
int main(){
	ll n;
	cin>>n;
	deque<pair<ll,ll>>dqe;
	ll a,sum=0;
	while(n--){
		cin>>a;
		++sum;
		if(!dqe.empty()&&dqe.rbegin()->first==a){
			dqe.rbegin()->second++;
			if(dqe.rbegin()->second==a){
				dqe.pop_back();
				sum-=a;
			}
		}else{
			dqe.push_back({a,1});
		}
		cout<<sum<<endl;
	}
}
