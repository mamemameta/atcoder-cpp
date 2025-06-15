#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
using namespace std;
#define ll long long

int main(){
	ll x,y,z;
	cin>>x>>y>>z;
	if(y<0){
		x*=-1;
		y*=-1;
		z*=-1;
	}
	if(x<0)
		cout<<-x<<endl;
	else if(x<y)
		cout<<x<<endl;
	else if(y<x&&y<z)
		cout<<-1<<endl;
	else 
		cout<<(x*z<0)*2*(-z)+(x);
}
/*
0xyz
0xzy
0yxz
0yzx
x0yz
x0zy
xz0y
zx0y

*/
