#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
using namespace std;
#define ll long long
bool ch(ll h,ll m){
	ll a,b,c,d;
	a=h/10;
	b=h%10;
	c=m/10;
	d=m%10;
	h=a*10+c;
	m=b*10+d;
	if(0<=h&&h<=23&&0<=m&&m<=59)
		return 1;
	else 
		return 0;
}

int main(){
	ll h,m;
	cin>>h>>m;
	while(!ch(h,m)){
		m++;
		if(m>59){
			h++;
			m=0;
			if(h>23){
				h=0;
			}
		}
	}
	cout<<h<<" "<<m<<endl;
}
