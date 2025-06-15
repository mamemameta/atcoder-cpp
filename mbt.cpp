#include<iostream>
#include<deque>
#define ll unsigned long long
using namespace std;
int main(){
	ll n,x;
	cin>>n>>x;
	deque<char>dqe;
	char c;
	while(n--){
		cin>>c;
		if(c=='U'&&!dqe.empty()&&dqe.back()!='U')
			dqe.pop_back();
		else 
			dqe.push_back(c);
	}
	ll i=0;
	while(!dqe.empty()){
		if(dqe.front()=='U'){
			x/=2;
		}else if(dqe.front()=='L'){
			x*=2;
		}else{//R
			x*=2;
			++x;
		}
		dqe.pop_front();
		++i;
	}
	cout<<x<<endl;
}
