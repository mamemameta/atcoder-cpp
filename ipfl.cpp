#include<iostream>
#include<vector>
#define ll long long
using namespace std;

int main(){
	ll n, q;
	string f,s;
	cin>>n>>f>>q;
	ll op,a,b,now=0;
	while(q--){
		cin>>op>>a>>b;
		if(op==1){
			--a,--b;
			swap(f[(now+a)%(2*n)],f[(now+b)%(2*n)]);
		}else{
			now^=n;
		}
	}
	if(now==n){
		f=f.substr(n,2*n)+f.substr(0,n);
	}
	cout<<f<<endl;
}
