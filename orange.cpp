#include<iostream>
#include<vector>
using namespace std;
#define ll long long
#define U "UNSATISFIABLE"
int main(){
	ll a,b;
	double w;
	cin>>a>>b>>w;
	w*=1000;	
	ll mi=1LL<<60,ma=-1;
	for(ll k=w/a+100;k>=max(0LL,(ll)w/b-100LL);--k){
		if(a*k<=w&&w<=b*k){
			mi=min(mi,(ll)k);
			ma=max(ma,(ll)k);
			//cout<<k<<" "<<mi<<" "<<ma<<endl;
		};
	}
	if(mi==1LL<<60){
		cout<<U<<endl;
	}else{
		cout<<mi<<" "<<ma<<endl;
	}

}
